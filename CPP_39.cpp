#include <iostream>
#include <cassert>

int prime_fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    int count = 0;
    for (int i = 2; i <= b / 2; ++i) {
        if (b % i == 0) {
            count++;
            break;
        }
    }

    return (count == 0) ? b : 0;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}