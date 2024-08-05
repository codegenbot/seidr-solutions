#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(const std::string& str) {
    return isPrime(str.length());
}

int main() {
    assert(prime_length("0") == false);
    // Add more test cases as needed
    return 0;
}