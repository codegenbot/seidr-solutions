#include <stdio.h>
using namespace std;

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int prime_fib(int n) {
    int a = 1, b = 1, fib = 1, count = 0;
    while (true) {
        if (isPrime(fib)) {
            count++;
            if (count == n)
                return fib;
        }
        a += 1;
        b = a + b;
        fib = b;
    }
}