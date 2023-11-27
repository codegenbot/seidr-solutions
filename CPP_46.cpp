#include <iostream>

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }

    int fib0 = 0;
    int fib1 = 0;
    int fib2 = 2;
    int fib3 = 0;
    int fib4 = 0;

    for (int i = 3; i <= n; i++) {
        fib4 = fib3 + fib2 + fib1 + fib0;
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib4;
    }

    return fib4;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "fib4(" << n << ") = " << fib4(n) << std::endl;
    return 0;
}