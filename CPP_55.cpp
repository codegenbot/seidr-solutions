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
    std::cout << "Enter a number to find its Fibonacci value: ";
    std::cin >> n;
    int result = fib(n);
    std::cout << "Fibonacci value of " << n << " is: " << result << std::endl;
    
    assert(result == fib(n));

    return 0;
}