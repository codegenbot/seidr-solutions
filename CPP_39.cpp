#include <vector>

int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 0; ; i++) {
        if (i == n) return b;
        fib = a + b;
        a = b;
        b = fib;
        if (!is_prime(fib)) continue;
    }
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}