#include <cassert>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int solve() {
    assert(fib(12) == 144);
    // Add more test cases if needed
    return 0;
}