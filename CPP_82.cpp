#include <iostream>
#include <string>

bool prime_length(const char* str) {
    size_t n = strlen(str);
    bool is_prime = true;

    if (n <= 1)
        return false;
    else if (n == 2)
        return true;

    for (size_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    std::cout << prime_length("0") << std::endl;
    return 0;
}