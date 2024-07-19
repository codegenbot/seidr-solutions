#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_digits_a = abs(a) == 0 ? 0 : abs(a) % 9 == 0 ? 9 : abs(a) % 9;
        int sum_digits_b = abs(b) == 0 ? 0 : abs(b) % 9 == 0 ? 9 : abs(b) % 9;
        if (sum_digits_a == sum_digits_b) {
            return a < b;
        }
        return sum_digits_a < sum_digits_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}