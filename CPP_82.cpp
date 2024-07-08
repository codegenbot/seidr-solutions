```cpp
#include <assert.h>

bool prime_length(const char* str) {
    if (*str == '\0') 
        return false;

    int n = 0;
    while (*str != '\0') {
        str++;
        n++;
    }

    bool is_prime = true;

    if (n <= 1)
        return false;
    else if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    assert(prime_length("0") == false);
}