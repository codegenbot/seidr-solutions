```cpp
#include <iostream>
#include <string>

bool is_prime(int n) {
    bool is_divisible = false;
    for (int i = 2; i * i <= n && !is_divisible; ++i) {
        if (n % i == 0) {
            is_divisible = true;
        }
    }
    return !is_divisible;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::to_string(is_prime(num)); 
}