#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
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

    int first = 1, second = 1, next;
    for (int i = 3; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    while (true) {
        if (isPrime(next)) {
            return next;
        }
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}