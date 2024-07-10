#include <cassert>

int fib4(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    
    int a = 0, b = 1, c = 1, d = 2, e = 0;
    for (int i = 4; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return e;
}