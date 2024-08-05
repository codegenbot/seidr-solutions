#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = std::abs(a), sum_b = std::abs(b);
        while (sum_a >= 10) sum_a = sum_a / 10 + sum_a % 10;
        while (sum_b >= 10) sum_b = sum_b / 10 + sum_b % 10;
        if (sum_a == sum_b) return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    std::vector<int> result = order_by_points({-76, -21, 0, 4, 23, 6, 6});
    assert(issame(result, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}