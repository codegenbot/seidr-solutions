#include <vector>
#include <algorithm>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2, sqrt_i = static_cast<int>(sqrt(num)); i <= sqrt_i; i++) {
        if (!(num % i)) return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 1; ; i++) {
        if (i == n) return b;
        fib = a + b;
        a = b;
        b = fib;
        if (!isPrime(fib)) continue;
        if (++i == n) return fib;
    }
}