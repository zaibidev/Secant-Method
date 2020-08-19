#include<iostream>
using namespace std;
float polynomial_expression(float p)
{
	return (p*p - 3);
}
int main()
{
	float m = NULL, n = NULL, ans = NULL;
	int i = NULL;
	for (i = 0; i < 20; i++)
	{
		if (polynomial_expression(i) < 0 && polynomial_expression(i + 1) > 0)
		{
			cout << "The root is : = [  " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " > 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " < 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
		if (polynomial_expression(i) > 0 && polynomial_expression(i + 1) < 0)
		{
			cout << "The root is : = [ " << i << " , " << i + 1 << " ] " << endl;
			cout << "f(" << i << ")" << " =  " << polynomial_expression(i) << " < 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " > 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
	}
	i = 1;
	double db = 0;
	while (i < 20)
	{
		if (i == 1)
		{
			m = m + 0.02;
			n = n - 0.02;
		}
		ans = (m*polynomial_expression(n) - n * polynomial_expression(m)) / (polynomial_expression(n) - polynomial_expression(m));
		if (i == 1)
		{
			cout << "For next Approximation" << i << " First approximation is  " << m << " and " << "Second approximation is " << n << endl;
		}
		else
		{
			cout << "So  " << i << " Approximation is " << ans << endl;
		}

		cout << "f(" << ans << ")" << " = " << polynomial_expression(ans) << endl << endl;

		n = ans;
		if (db == ans)
			break;
		db = ans;
		i = i + 1;
	}
	cout << "The approximated root is: = " << ans << endl;
	system("pause");
}