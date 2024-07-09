#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int fib_num = 0, fib_prev = 1, count = 0;
    while (true) {
        int fib_new = fib_prev + fib_num;
        if (isPrime(fib_new)) {
            if (++count == n)
                return fib_new;
            fib_num = fib_new;
            fib_prev = fib_num - fib_prev;
        }
    }
}