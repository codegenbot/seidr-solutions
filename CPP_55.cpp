#include <cassert>

long long fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    assert(fib(12) == 144LL);
    return 0;
}