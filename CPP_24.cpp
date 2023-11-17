/*
For a given number n, find the largest number that divides n evenly, smaller than n
>>> largest_divisor(15)
5
*/
#include<stdio.h>
using namespace std;
int largest_divisor(int n){
	int i;
	for(i=n/2;i>=1;i--){
		if(n%i==0){
			return i;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",largest_divisor(n));
	return 0;
}
