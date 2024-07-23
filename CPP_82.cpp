```cpp
#include <iostream>
#include <string>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length() {
    int len = static_cast<int>(std::cin.ignore().peek()); 
    while(std::cin.peek() != '\n' && std::cin.peek() != '\r') {
        len = static_cast<int>(len * 10 + (std::cin.get() - '0')); 
    }
    return isPrime(len);
}

int main() {
    bool result = prime_length(); 
    if (result) {
        std::cout << "Prime length" << std::endl;
    } else {
        std::cout << "Not prime length" << std::endl;
    }
    return 0;
}