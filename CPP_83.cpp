/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	if(n==1)
		return 2;
	if(n==2)
		return 4;
	int dp[n+1];
	dp[1]=2;
	dp[2]=4;
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",starts_one_ends(n));
}
