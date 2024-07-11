#include <cstdio>
using namespace std;

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && isPrime(a))
            return a;
        int temp = a;
        a = b;
        b = temp + b;
    }
    return a;
}