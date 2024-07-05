#include <iostream>
#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    return is_prime(str.length());
}

int main() {
    assert (prime_length("0") == false);
    // Add more test cases as needed
    return 0;
}