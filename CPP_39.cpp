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
        int num = n; // store n as an integer
        int result = prime_fib(num);
        std::string suffix;
        if (num == 1) {
            suffix = "st";
        } else if (num == 2) {
            suffix = "nd";
        } else if (num == 3) {
            suffix = "rd";
        } else {
            suffix = "th";
        }
        std::string str = std::to_string(result);
        std::cout << "The " << str << suffix << " prime Fibonacci number is: ";
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