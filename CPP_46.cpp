```
#include <iostream>

int fib4(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 2;
    } else {
        int a = 0, b = 0, c = 2;
        for (int i = 3; i <= n; i++) {
            int d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return c;
    }
}

int main() {
    std::cout << "fib4(5) = " << fib4(5) << std::endl;
    std::cout << "fib4(6) = " << fib4(6) << std::endl;
    std::cout << "fib4(7) = " << fib4(7) << std::endl;
    return 0;
}
```