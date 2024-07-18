#include <cassert>

int fib(int n);

int main() {
    // Test the function with some sample inputs
    assert(fib(0) == 0);
    assert(fib(1) == 1);
    assert(fib(5) == 5);
    assert(fib(10) == 55);

    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}