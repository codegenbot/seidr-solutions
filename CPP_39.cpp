#include <cstdio>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        if ((b > n)) return b;
        int temp = a + b;
        a = b;
        b = temp;
        bool isPrime = true;
        for (int j = 2; j * j <= b; j++) {
            if (b % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;
    }
}