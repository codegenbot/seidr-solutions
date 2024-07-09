```c++
#include <assert.h>

bool is_prime(int n); // declare the function first

int main() {
    assert(is_prime(13441 * 19) == false);
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}