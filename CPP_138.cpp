#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; ++i) {
        if (n == i) continue;
        int sum = 0;
        for (int j = 2; j <= i && sum + 2*j <= n; ++j) {
            sum += 2 * j;
            if (sum == n) return true;
        }
    }
    return false;
}