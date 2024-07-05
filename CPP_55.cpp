#include <iostream>
#include <cassert>

int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    assert(fib(12) == 144);
    std::cout << fib(12) << std::endl; // This will print 144
    return 0;
}