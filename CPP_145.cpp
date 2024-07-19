#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    auto order_by_points = [](std::vector<int> nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            int sum_a = 0, sum_b = 0;
            int temp_a = abs(a), temp_b = abs(b);
            while (temp_a > 0) {
                sum_a += temp_a % 10;
                temp_a /= 10;
            }
            while (temp_b > 0) {
                sum_b += temp_b % 10;
                temp_b /= 10;
            }
            if (sum_a == sum_b) {
                return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
            }
            return sum_a < sum_b;
        });
        return nums;
    };

    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}