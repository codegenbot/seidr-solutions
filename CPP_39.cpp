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
    int first = 1;
    int second = 1;
    int count = 2;
    int result = 0;

    while (count < n) {
        int next = first + second;
        if (isPrime(next)) {
            count++;
            result = next;
        }
        first = second;
        second = next;
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "The " << n << "-th number that is a Fibonacci number and prime is: " << prime_fib(n) << std::endl;

    return 0;
}