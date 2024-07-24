#include <vector>
#include <cmath>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) return b;
        int fib = a + b;
        a = b;
        b = fib;
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