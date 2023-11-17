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
	int i,j,k;
	for(i=2;i<a;i++){
		for(j=i;j<a;j++){
			for(k=j;k<a;k++){
				if(i*j*k==a)
					return true;
			}
		}
	}
	return false;
}
int main(){
	printf("%d",is_multiply_prime(30));
}
