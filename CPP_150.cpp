/*
A simple program which should return the value of x if n is 
a prime number and should return the value of y otherwise.

Examples:
for x_or_y(7, 34, 12) == 34
for x_or_y(15, 8, 5) == 5

*/
#include<stdio.h>
using namespace std;
int x_or_y(int n,int x,int y){

	int a=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			a=1;
			break;
		}
	}
	if(a==0){
		return x;
	}
	else{
		return y;
	}
}
