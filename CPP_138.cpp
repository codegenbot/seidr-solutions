#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int a = 2; a <= n; a += 2) {
        for (int b = 2; b <= n - a; b += 2) {
            for (int c = 2; c <= n - a - b; c += 2) {
                for (int d = 2; d <= n - a - b - c; d += 2) {
                    if (a + b + c + d == n)
                        return true;
                }
            }
        }
    }
    return false;
}