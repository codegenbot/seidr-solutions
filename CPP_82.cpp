#include <iostream>
#include <string>
#include <cassert>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    return is_prime(str.length());
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("hello") == true);  // "hello" length is 5
    assert(prime_length("test") == false);  // "test" length is 4

    std::cout << "All tests passed.\n";
    return 0;
}