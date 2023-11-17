/*
prime_fib returns n-th number that is a Fibonacci number and it's also prime.
>>> prime_fib(1)
2
>>> prime_fib(2)
3
>>> prime_fib(3)
5
>>> prime_fib(4)
13
>>> prime_fib(5)
89
*/
#include<stdio.h>
using namespace std;
int prime_fib(int n){
	int a = 1, b = 1, c = 2, count = 2;
	while (count < n) {
		a = b;
		b = c;
		c = a + b;
		count++;
		while (!is_prime(c)) {
			a = b;
			b = c;
			c = a + b;
			count++;
		}
	}
	return c;
}

bool is_prime(int n) {
	if (n == 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", prime_fib(n));
	return 0;
}
