#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;

    int prev1 = 2, prev2 = 3, fib = 0;
    for (int i = 3; i <= n; i++) {
        fib = prev1 + prev2;
        while (!isPrime(fib)) {
            fib++;
        }
        prev1 = prev2;
        prev2 = fib;
    }
    return fib;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}