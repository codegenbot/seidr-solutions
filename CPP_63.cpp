#include <cassert>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    }

    int a = 0, b = 1, c = 1, result = 0;

    for (int i = 3; i <= n; ++i) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    assert(fib(14) == 610); // Should pass
}