#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) return b;
        int temp = a + b;
        a = b;
        b = temp;
        if (!isPrime(b)) continue;
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}