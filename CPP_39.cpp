#include <cmath>

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