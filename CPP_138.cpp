#include <vector>
#include <algorithm>

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) {
        int sum = 0;
        for (int j = 2; j <= n; j += 2) {
            if (i != j && sum + j <= n) {
                sum += j;
                if (sum == n) return true;
            }
        }
    }
    return false;
}