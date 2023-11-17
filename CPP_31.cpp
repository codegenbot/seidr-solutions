/*
Return true if a given number is prime, and false otherwise.
>>> is_prime(6)
false
>>> is_prime(101)
true
>>> is_prime(11)
true
>>> is_prime(13441)
true
>>> is_prime(61)
true
>>> is_prime(4)
false
>>> is_prime(1)
false
*/
#include<stdio.h>
using namespace std;
bool is_prime(long long n){
	if(n<=1)
		return false;
	else if(n<=3)
		return true;
	else if(n%2==0 || n%3==0)
		return false;
	int i=5;
	while(i*i<=n){
		if(n%i==0 || n%(i+2)==0)
			return false;
		i+=6;
	}
	return true;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(is_prime(n))
		printf("TRUE\n");
	else
		printf("FALSE\n");
	return 0;
}
