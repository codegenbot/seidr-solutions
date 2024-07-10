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
    if (n <= 0) {
        return -1;
    }
    if (n == 1) {
        return 2;
    }

    int first = 1, second = 1, fib = 0;
    int count = 2;

    while (count < n) {
        fib = first + second;
        first = second;
        second = fib;
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