#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        auto sum_digits = [](int num) {
            return num == 0 ? 0 : num % 9 == 0 ? 9 : num % 9;
        };
        
        int sum_digits_a = sum_digits(std::abs(a));
        int sum_digits_b = sum_digits(std::abs(b));
        
        if (sum_digits_a == sum_digits_b) {
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        }
        
        return sum_digits_a < sum_digits_b;
    });

    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}