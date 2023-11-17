/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char a[100],b[100];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	int i,j,x,y;
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		if(a[i]=='.'){
			a[i]=',';
		}
	}
	for(j=0;j<y;j++){
		if(b[j]=='.'){
			b[j]=',';
		}
	}
	float z,m;
	z=atof(a);
	m=atof(b);
	if(z>m){
		printf("%f",z);
	}
	else if(m>z){
		printf("%f",m);
	}
	else{
		printf("None");
	}
}
