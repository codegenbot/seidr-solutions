#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (count < n) {
        if (isPrime(b)) {
            count++;
            if (count == n) {
                return b;
            }
            swap(a, b);
            b += a + 1;
        } else {
            b += a + 1;
        }
    }
    return -1; // not found
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