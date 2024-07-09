```cpp
#include <iostream>
#include <cassert>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n <= 0) {
        return -1; // invalid input
    }
    int a = 1, b = 1, count = 1;
    while (true) {
        if (isPrime(b)) {
            if (count == n) {
                return b;
            }
            count++;
        }
        int temp = a + b;
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    }
}