#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fibNum = 0;
    while (true) {
        fibNum = a + b;
        if (isPrime(fibNum)) {
            if (++n == 0) return fibNum;
            a = b;
            b = fibNum;
        } else {
            a = b;
            b = fibNum;
        }
    }
}