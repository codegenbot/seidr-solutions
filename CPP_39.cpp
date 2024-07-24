#include <stdio.h>
#include <math.h>

using namespace std;

int prime_fib(int n) {
    int a = 1, b = 1;
    for (int i = 2; ; i++) {
        int temp = a + b;
        if (temp >= n)
            return temp;
        a = b;
        b = temp;
        if (b < 2 || isPrime(b)) {
            continue;
        }
        while (!isPrime(b) && b > 1) {
            b--;
        }
        a = b;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}