#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) return b;
        int temp = a + b;
        a = b;
        b = temp;
        bool isPrime = true;
        for (int j = 2; j * j <= b; j++)
            if (b % j == 0) {
                isPrime = false;
                break;
            }
        if (!isPrime) continue;
    }
}