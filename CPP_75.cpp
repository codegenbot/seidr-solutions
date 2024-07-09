#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        int temp = a;
        bool flag = true;
        while (temp % i == 0) {
            temp /= i;
            if (i != 2 && i != 3)
                flag = false;
        }
        if (temp > 1 || flag)
            return false;
    }
    return true;
}