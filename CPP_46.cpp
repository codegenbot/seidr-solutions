#include <cassert>

int fib4(int n) {
    int a = 0, b = 1, c = 1, d = 2, e = 0;
    for (int i = 5; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return d;
}