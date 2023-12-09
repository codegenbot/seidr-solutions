```cpp
#include <iostream>

int fib4(int n) {
    if (n <= 3) {
        return 0;
    } else if (n == 4) {
        return 2;
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
    std::cout << "The " << n << "-th Fibonacci number is: " << fib4(n) << std::endl;
    return 0;
}
```