#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fibNum = 0;
    while (true) {
        fibNum = a + b;
        a = b;
        b = fibNum;
        if (isPrime(fibNum))
            return fibNum;
        if (++n == 0)
            break;
    }
    return -1; // not found
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << std::endl;
    return 0;
}