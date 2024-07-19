#include <iostream>
#include <cassert>

int fibfib(int n);

int main() {
    int n;
    std::cin >> n;
    assert(n >= 0);
    std::cout << fibfib(n);
    return 0;
}

int fibfib(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    int a = 0, b = 0, c = 1, d;
    for (int i = 3; i <= n; ++i) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}