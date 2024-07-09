#include <stdio.h>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (b > n) break;
        if (isPrime(b)) count++;
        if (count == n) return b;
        int temp = a + b;
        a = b; b = temp;
    }
    return -1;
}

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}