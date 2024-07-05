#include <iostream>
#include <cassert>
#include <string>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

bool prime_length(const std::string& str) {
    return is_prime(str.length());
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("01") == true);
    assert(prime_length("012") == false);
    assert(prime_length("0123") == true);
    assert(prime_length("01234") == false);
    std::cout << "All test cases pass!" << std::endl;
    return 0;
}