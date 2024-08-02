#include <iostream>

using namespace std;

int prime_fib(int n) {
    int fib = 0, a = 1, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) {
            return fib;
        }
        fib = a + b;
        int temp = a;
        a = b;
        b = temp + b;
        if (!isPrime(fib)) {
            continue;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}