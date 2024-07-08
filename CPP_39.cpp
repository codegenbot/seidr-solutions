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
    if (n == 2) {
        return 3;
    }
    int a = 2, b = 3, c, count = 2;
    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        if (isPrime(c)) {
            count++;
        }
    }
    return b;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}