#include <cmath>

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (b >= n) break;
        if (isPrime(b)) {
            if (++count == n) return b;
            a = b;
            b += a;
        } else {
            b += a;
        }
    }
    return -1; // or throw an exception
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}