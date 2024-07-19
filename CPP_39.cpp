#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 2;
    if (n == 2) return 3;
    
    int a = 2, b = 3, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        while (!isPrime(c)) {
            c = a + b;
            a = b;
            b = c;
        }
        a = b;
        b = c;
    }
    
    return c;
}