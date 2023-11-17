/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	int count = 0;
	if(n == 1)
		return 1;
	else if(n == 2)
		return 10;
	else{
		count = 9;
		for(int i = 3; i <= n; i++)
			count = count*(10-i+1);
		return count;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", starts_one_ends(n));
	return 0;
}
