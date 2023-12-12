#include <iostream>
#include <cmath>

bool is_equal_to_sum_even(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            count++;
            if (count >= 4) {
                return true;
            }
        }
    }
    return false;
}