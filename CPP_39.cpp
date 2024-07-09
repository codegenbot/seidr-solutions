#include <iostream>
#include <vector>

int prime_fib(int n);

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << std::endl; 
}

int prime_fib(int n) {
    if (n <= 0) return -1;
    int a = 0, b = 1, count = 0;
    while (true) {
        int temp = a + b;
        if (temp > n) break;
        if (isPrime(temp)) {
            a = b;
            b = temp;
            count++;
            if (count == n) return temp;
        }
        else {
            a = b;
            b = temp;
        }
    }
    return -1;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}