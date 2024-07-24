#include <vector>
#include <iostream>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int temp = a;
        a = b;
        b = temp + b;
        if (b > 10000) break;
        if (isPrime(b)) return b;
    }
    return -1;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2, sqrt_i = sqrt(num); i <= sqrt_i; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}