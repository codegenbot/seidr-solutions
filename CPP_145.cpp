#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        auto sum = [](int a) {
            return std::accumulate(std::to_string(std::abs(a)).begin(), std::to_string(std::abs(a)).end(),
                                    0, [](int acc, char digit) { return acc + (digit - '0'); });
        };
        return sum(a) == sum(b) ? a < b : sum(a) < sum(b);
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}