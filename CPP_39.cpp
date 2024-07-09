#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; ; i++) {
        if (isPrime(b)) {
            if (i == n - 1)
                return b;
            a = b;
            b = a + b;
        } else
            b = a + b;
    }
}