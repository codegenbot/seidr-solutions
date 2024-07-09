#include <iostream>
using namespace std;

int prime_fib(int n) {
    int fib_num = 0;
    int a = 0, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) {
            return fib_num + 1;
        }
        fib_num = a + b;
        int temp = a;
        a = b;
        b = temp + b;
        if (is_prime(fib_num)) {
            if (i == n) {
                return fib_num;
            }
        }
    }
}

bool is_prime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}