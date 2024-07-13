#include <stdio.h>
#include <math.h>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib >= n)
            return fib;
        a = b;
        b = fib;
        if (isPrime(fib))
            return fib;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}