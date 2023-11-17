/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n==2)
		return 10;
	int *dp=new int[n+1];
	dp[0]=0;
	dp[1]=1;
	dp[2]=10;
	for(int i=3;i<=n;i++)
	{
		dp[i]=(dp[i-1]*9)+(dp[i-2]*9);
	}
	return dp[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",starts_one_ends(n));
	return 0;
}
