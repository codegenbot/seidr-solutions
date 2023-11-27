#include <cmath>
#include <string>
#include <cassert>

bool is_prime(int n) {
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

bool prime_length(std::string str) {
    int length = str.length();
    return is_prime(length);
}

int main() {
    assert(prime_length("0") == false);

    return 0;
}