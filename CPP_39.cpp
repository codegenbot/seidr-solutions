#include <cstdio>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) return a;
        int temp = a;
        a = b;
        for (int j = 3; j * j <= a + b; j++) {
            if (a % j == 0 || b % j == 0) {
                a = temp;
                b = temp + 1;
                i--;
                break;
            }
        }
        b += a;
    }
    return a;
}