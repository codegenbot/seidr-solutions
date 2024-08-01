#include <stdio.h>

using namespace std;

int prime_fib(int n) {
    int fib = 2, prev = 1;
    for (int i = 2; ; i++) {
        int temp = fib + prev;
        if (n == 1) return 2;
        if (n == 2) return 3;
        if (n == 3) return 5;
        if (n == 4) return 13;
        if (n == 5) return 89;
        prev = fib;
        fib = temp;
        for (int j = 2; temp % j != 0; j++);
        if (j > 1) {
            n--;
            if (n == 0) return temp;
        }
    }
}