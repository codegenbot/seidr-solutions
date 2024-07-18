#include <cassert>
#include <iostream>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main_contest() {
    assert(fib(12) == 144);
    return 0;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Fibonacci of " << n << " is: " << fib(n) << std::endl;
    return 0;
}