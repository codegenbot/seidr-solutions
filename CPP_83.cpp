/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	if(n==1) return 2;
	if(n==2) return 3;
	if(n>2) return 2*starts_one_ends(n-1) + starts_one_ends(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",starts_one_ends(n));
	return 0;
}
