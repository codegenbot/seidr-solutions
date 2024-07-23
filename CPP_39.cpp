#include <stdio.h>
#include <vector>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        if (is_prime(b)) {
            return b;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return -1;
}