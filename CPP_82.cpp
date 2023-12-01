#include <cmath>
#include <string>
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

bool is_prime_length(std::string str) {
    int length = str.length();
    return isPrime(length);
}

int main() {
    assert(is_prime_length("0") == false);

    return 0;
}