```cpp
#include <iostream>
#include <string>

bool isPrime(int num); 

int prime_fib(int n);

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    // Check if input is an integer
    if (!(n >= 1 && n <= 9)) { 
        std::cout << "-1" << std::endl; 
    } else {
        int result = prime_fib(n);
        std::string suffix;
        if (n == 1) {
            suffix = "st";
        } else if (n == 2) {
            suffix = "nd";
        } else if (n == 3) {
            suffix = "rd";
        } else {
            suffix = "th";
        }
        std::cout << "The " << std::to_string(result) << " " << suffix << " prime Fibonacci number is: ";
        std::cout << result << std::endl;
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