/*
Write a function that returns true if the given number is the multiplication of 3 prime numbers
and false otherwise.
Knowing that (a) is less then 100. 
Example:
is_multiply_prime(30) == true
30 = 2 * 3 * 5
*/
#include<stdio.h>
using namespace std;
bool is_multiply_prime(int a){
	int i, j, k, x, y, z, count=0;
	for(i=1; i<=a; i++){
		if(a%i==0)
			count++;
		if(count==3)
			break;
	}
	x=i;
	for(j=1; j<=a; j++){
		if(a%j==0)
			count++;
		if(count==5)
			break;
	}
	y=j;
	for(k=1; k<=a; k++){
		if(a%k==0)
			count++;
		if(count==7)
			break;
	}
	z=k;
	if(count==7){
		return true;
	}
	else{
		return false;
	}
}
