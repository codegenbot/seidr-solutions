#include <iostream>
#include <cassert>

int prime_fib(int n) {
    int a = 1, b = 1, c, count = 2;
    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        count++;
    }
    while (true) {
        c = a + b;
        a = b;
        b = c;
        bool isPrime = true;
        for (int i = 2; i * i <= b; i++) {
            if (b % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && count == n) {
            return b;
        }
        count++;
    }
}

int main() {
    assert(prime_fib(10) == 433494437);
    return 0;
}