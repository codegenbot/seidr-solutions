/*
Your task is to write a function that returns true if a number x is a simple
power of n and false in other cases.
x is a simple power of n if n**int=x
For example:
is_simple_power(1, 4) => true
is_simple_power(2, 2) => true
is_simple_power(8, 2) => true
is_simple_power(3, 2) => false
is_simple_power(3, 1) => false
is_simple_power(5, 3) => false
*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool is_simple_power(int x,int n){
	if (x == 1)
	{
		return true;
	}
	else if (x == 0)
	{
		return false;
	}
	else
	{
		int i = 2;
		double j = log(x) / log(n);
		while (i <= j)
		{
			if (i == j)
			{
				return true;
			}
			i++;
		}
		return false;
	}
}
int main()
{
	printf("%d\n", is_simple_power(1, 4));
	printf("%d\n", is_simple_power(2, 2));
	printf("%d\n", is_simple_power(8, 2));
	printf("%d\n", is_simple_power(3, 2));
	printf("%d\n", is_simple_power(3, 1));
	printf("%d\n", is_simple_power(5, 3));
	return 0;
}
