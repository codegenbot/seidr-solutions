```cpp
#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int num;
    std::cin >> num;
    if (is_prime(num)) 
        std::cout << "true"; 
    else 
        std::cout << "false";
}