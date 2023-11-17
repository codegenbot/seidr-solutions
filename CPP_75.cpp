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
	int i,j;
	for(i=2;i<=a;i++){
		if(a%i==0){
			for(j=2;j<=i;j++){
				if(i%j==0){
					break;
				}
			}
			if(i==j){
				printf("%d ",i);
			}
		}
	}
}
int main(){
	int a;
	scanf("%d",&a);
	is_multiply_prime(a);
}
