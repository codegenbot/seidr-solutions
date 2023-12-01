#include <iostream>

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    
    int a = 0;
    int b = 0;
    int c = 2;
    int d = 0;
    
    for (int i = 2; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    
    return c;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "fib4(" << n << ") = " << fib4(n) << std::endl;
    return 0;
}