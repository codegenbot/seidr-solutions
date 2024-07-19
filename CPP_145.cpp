#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        auto calc_sum = [](int num) {
            return std::accumulate(std::to_string(std::abs(num)).begin(), std::to_string(std::abs(num)).end(),
                                    0, [](int acc, char c) { return acc + c - '0'; });
        };
        return a < b;
    });
    return nums;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}),
                   std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}