```cpp
#include <iostream>
#include <string>

bool isPrime(int num); 

int prime_fib(int n);

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "-1" << std::endl;
    } else {
        std::string str = "The " + std::to_string(int(1e9)) + "th prime Fibonacci number is: ";
        std::cout << str << prime_fib(n) << std::endl;
    }
}

int prime_fib(int n) {
    if (n <= 0)
        return -1; 
    int a = 1, b = 1, count = 2;
    while (true) {
        if (isPrime(b))
            if (++count == n)
                return b;
        int temp = a + b;
        a = b;
        b = temp;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false; 
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}