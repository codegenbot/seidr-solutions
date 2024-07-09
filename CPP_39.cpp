```
#include <iostream>

int prime_fib(int n);

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << std::endl; 
}