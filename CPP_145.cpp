#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> nums_copy(nums.begin(), nums.end());
    std::sort(nums_copy.begin(), nums_copy.end(), [](int a, int b) {
        int sum_digits_a = 0, sum_digits_b = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;
        while (a) { sum_digits_a += a % 10; a /= 10; }
        while (b) { sum_digits_b += b % 10; b /= 10; }
        if (sum_digits_a == sum_digits_b) return a < b;
        return sum_digits_a < sum_digits_b;
    });
    return nums_copy;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}