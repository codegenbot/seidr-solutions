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
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        int temp = a;
        a = b;
        b = temp + b;
        while (!isPrime(b)) {
            temp = a;
            a = b;
            b = temp + b;
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