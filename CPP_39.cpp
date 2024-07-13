#include <stdio.h>
#include <math.h>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n) return i;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j <= sqrt(fib); j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;
        return i;
    }
}

int main() {
    printf("%d\n", prime_fib(1));
    printf("%d\n", prime_fib(2));
    printf("%d\n", prime_fib(3));
    printf("%d\n", prime_fib(4));
    printf("%d\n", prime_fib(5));
    return 0;
}