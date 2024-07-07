#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib >= n) break;
        a = b;
        b = fib;
    }
    for (int i = b; ; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        if (isPrime) return i;
    }
}