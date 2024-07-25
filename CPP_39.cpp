#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib >= n) break;
        a = b;
        b = fib;
    }
    for (int p = 2; ; p++) {
        bool isPrime = true;
        for (int d = 2; d*d <= p; d++) {
            if (p % d == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && b == p) return p;
    }
}