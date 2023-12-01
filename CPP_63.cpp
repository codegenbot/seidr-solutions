#include <iostream>

int fibfib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int fib1 = 0;
        int fib2 = 1;
        int fib3 = 1;
        int fibN = 0;
        
        for (int i = 3; i <= n; i++) {
            fibN = fib1 + fib2 + fib3;
            fib1 = fib2;
            fib2 = fib3;
            fib3 = fibN;
        }
        
        return fibN;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    std::cout << "The " << n << "-th element of the FibFib number sequence is: " << fibfib(n) << std::endl;
    
    return 0;
}