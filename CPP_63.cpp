#include <iostream>
#include <cassert>

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        int a = 0, b = 1, c, result;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    assert(fib(14) == 377);
    return 0;
}