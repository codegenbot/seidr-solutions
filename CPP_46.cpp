```
#include <iostream>

int fib4(int n) {
    if (n <= 0) {
        throw std::invalid_argument("n must be positive");
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int a = fib4(n-1);
        int b = fib4(n-2);
        int c = fib4(n-3);
        int d = fib4(n-4);
        return a + b + c + d;
    }
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    if (n > 100) {
        throw std::invalid_argument("n must be less than or equal to 100");
    }
    std::cout << "The " << n << "-th Fibonacci number is: " << fib4(n) << std::endl;
    return 0;
}
```