#include <iostream>
#include <cassert>

int prime_fib(int n) {
    int a = 1, b = 1, c, count = 2;
    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 1) {
            int flag = 1;
            for (int i = 2; i <= c / 2; i++) {
                if (c % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                count++;
            }
        }
    }
    return c;
}

assert(prime_fib(10) == 233);