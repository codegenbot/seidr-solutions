```cpp
#include <iostream>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    bool is_divisor = false;
    for (int i = 2; i * i <= n && !is_divisor; ++i) {
        if (n % i == 0) {
            is_divisor = true;
        }
    }
    return !is_divisor;
}

int main() {
    int n;
    std::cin >> n;
    assert(is_prime(n));
    std::cout << "The number is prime." << std::endl;
    return 0;
}