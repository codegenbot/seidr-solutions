```cpp
#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 1; i <= std::pow(100, 1/3); ++i) {
        int j = i, k = i;
        while (j * k <= 100) {
            if (i * j * k == a) {
                bool prime = true;
                for (int x = 2; x <= sqrt(a); ++x) {
                    if ((i % x == 0) || (j % x == 0) || (k % x == 0)) {
                        prime = false;
                        break;
                    }
                }
                return prime;
            }
            k++;
        }
    }
    return false;
}