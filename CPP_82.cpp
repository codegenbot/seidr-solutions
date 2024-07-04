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

bool prime_length(std::string str) {
    int len = str.length();
    return is_prime(len);
}

int main() {
    assert(prime_length("0") == false);
    assert(prime_length("abc") == true);
    assert(prime_length("test") == false);
    assert(prime_length("prime") == true);

    std::string input;
    std::cin >> input;
    if (prime_length(input)) {
        std::cout << "The length of the string is a prime number." << std::endl;
    } else {
        std::cout << "The length of the string is not a prime number." << std::endl;
    }
    return 0;
}