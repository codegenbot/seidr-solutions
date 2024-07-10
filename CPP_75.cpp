```cpp
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int k = i;
        while (k * k <= a / i) {
            if ((a / i) % k == 0)
                return false;
            k++;
        }
        if (a / i == i)
            return true;
    }
    return true;
}