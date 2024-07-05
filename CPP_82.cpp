#include <iostream>
#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(std::string str) {
    int length = str.length();
    return is_prime(length);
}

int main() {
    assert(prime_length("0") == false);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}