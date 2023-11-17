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
	int a1=0,a2=0,a3=0;
	for(int i=2;i<=a;i++){
		if(a%i==0){
			if(a1==0){
				a1=i;
			}
			else if(a2==0){
				a2=i;
			}
			else if(a3==0){
				a3=i;
			}
		}
	}
	int b=a/a1;
	int c=a/a2;
	int d=a/a3;
	if(b==a2*a3&&c==a1*a3&&d==a1*a2){
		return true;
	}
	else return false;
}
