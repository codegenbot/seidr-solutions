/*
Return the largest prime factor of n. Assume n > 1 and is not a prime.
>>> largest_prime_factor(13195)
29
>>> largest_prime_factor(2048)
2
*/
#include<stdio.h>
using namespace std;
int largest_prime_factor(int n){
	int i = 2, max = 1;
	while (i <= n){
		if (n % i == 0){
			max = i;
			n /= i;
		}
		else i++;
	}
	return max;
}
int main(){
	int n;
	scanf_s("%d", &n);
	printf("%d", largest_prime_factor(n));
	getchar();
	getchar();
}
