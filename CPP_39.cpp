#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n) break;
        a = b;
        b = fib;
        if (is_prime(fib)) return fib;
    }
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    printf("%d\n", prime_fib(5));
    return 0;
}