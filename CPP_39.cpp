#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fib = 1;
    while (true) {
        if (isPrime(fib)) {
            if (++n == 1) return a + 1;
            if (--n == 1) return b + 1;
            a = b; b = fib; fib = a + b;
        } else
            fib = a + b;
    }
}