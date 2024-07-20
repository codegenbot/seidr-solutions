#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }

    int prev1 = 2, prev2 = 3;
    int fib = 0;
    int count = 2;

    while (count < n) {
        fib = prev1 + prev2;
        prev1 = prev2;
        prev2 = fib;

        if (isPrime(fib)) {
            count++;
        }
    }

    return fib;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}