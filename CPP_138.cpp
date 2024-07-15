#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int a = 2; a <= n / 2; a += 2) {
        int sum = 0;
        for (int b = 2; b <= n / 2; b += 2) {
            if (sum + b > n) break;
            if (sum + b == n) return true;
            sum += b;
        }
    }
    return false;
}