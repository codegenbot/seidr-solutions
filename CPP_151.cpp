/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
	long long sum=0;
	for(int i=0;i<lst.size();i++)
	{
		if(lst[i]>=0)
		{
			if(lst[i]==(int)lst[i])
			{
				if(lst[i]%2!=0)
				{
					sum=sum+pow(lst[i],2);
				}
			}
		}
	}
	return sum;
}
/* n= 4, r = 2
         n!
p = ------------
    r! * (n-r)!*/

#include <stdio.h>

int factorial(int);

int main()
{
    int n, r, permutation;

    scanf("%d %d", &n, &r);
    permutation = factorial(n) / factorial(n - r);
    //printf("Permutation is %d", permutation);
    return 0;
}
int factorial(int num)
{
    if (num == 0)
    {

        return 1;
    }
    else
    {
        return (factorial(num - 1) * num);
    }
}
