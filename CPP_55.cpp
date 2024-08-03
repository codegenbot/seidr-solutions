#include <cassert>

int fib(int n);

int main() {
    assert(fib(12) == 144);
    return 0;
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}