```c
#include <iostream>
#include <string>

int prime_fib(int n);

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::string str = std::to_string(n);
    std::cout << "The " << str << "th prime Fibonacci number is: " << prime_fib(std::stoi(str)) << std::endl; 
}