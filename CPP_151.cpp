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
	vector<float>::iterator x;                             
	float sum=0,res=0;
	int i=0;
	for(x=lst.begin();x!=lst.end();x++)
	{
		if(((*x)/(int)(*x))==1&&(*x)>=0)          
		{
			i++;                                
			sum+=(*x)*(*x);
		}
		else{
			i=i;                                
		}
	}
	if(i%2==0)
	{
		res=sum;
	}
	else
	{
		res=2*sum;
	}
	return res;
}
