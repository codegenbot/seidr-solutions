/*
Evaluate whether the given number n can be written as the sum of exactly 4 positive even numbers
Example
is_equal_to_sum_even(4) == false
is_equal_to_sum_even(6) == false
is_equal_to_sum_even(8) == true
*/
#include<stdio.h>
using namespace std;
bool is_equal_to_sum_even(int n){
	int i,j,k,l;
	for(i=0;i<=n;i+=2)
	{
		for(j=0;j<=n;j+=2)
		{
			for(k=0;k<=n;k+=2)
			{
				for(l=0;l<=n;l+=2)
				{
					if(i+j+k+l==n)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(is_equal_to_sum_even(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
