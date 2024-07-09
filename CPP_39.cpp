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
        std::string str = "The ";
        switch (n) {
            case 1: str += "first"; break;
            case 2: str += "second"; break;
            case 3: str += "third"; break;
            default: str += "the " + std::to_string(n) + "th";
        }
        str += " prime Fibonacci number is: ";
        std::cout << str << result << std::endl;
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