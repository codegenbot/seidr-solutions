#include <iostream>
#include <cassert>

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

int main() {
    int n;
    std::cout << "Enter a number to calculate Fibonacci number: ";
    std::cin >> n;
    std::cout << "Fibonacci number at position " << n << " is " << fib(n) << std::endl;
    return 0;
}