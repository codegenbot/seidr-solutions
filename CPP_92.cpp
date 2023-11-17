/*
Create a function that takes 3 numbers.
Returns true if one of the numbers is equal to the sum of the other two, and all numbers are integers.
Returns false in any other cases.

Examples
any_int(5, 2, 7) ➞ true

any_int(3, 2, 2) ➞ false

any_int(3, -2, 1) ➞ true

any_int(3.6, -2.2, 2) ➞ false



*/
#include<stdio.h>
#include<math.h>
using namespace std;
bool any_int(float a,float b,float c){
	
	if(a+b!=c && a!=b+c && b!=a+c){
		return false;
	}
	if(a!=round(a)){
		return false;
	}
	if(b!=round(b)){
		return false;
	}
	if(c!=round(c)){
		return false;
	}
	return true;
}
