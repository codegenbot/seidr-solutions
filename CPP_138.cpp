#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int a = 2; a <= n / 2; a += 2) {
        int remaining = n - a;
        std::vector<int> nums;
        int sum = 0;
        for (int b = 2; b <= remaining / 2; b += 2) {
            if ((remaining - b) % 2 == 0 && (a + b) <= n) {
                nums.push_back(a);
                nums.push_back(b);
                sum = a + b;
                break;
            }
        }
        if (sum == n) return true;
    }
    return false;
}