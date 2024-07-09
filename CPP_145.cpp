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

bool issame(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    return nums1 == nums2;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}