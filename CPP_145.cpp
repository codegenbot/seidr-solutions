#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <numeric>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = std::accumulate(std::to_string(std::abs(a)).begin(), std::to_string(std::abs(a)).end(), 0, 
        [](int sum, char c) {
            return sum + (c - '0');
        });
        int sumB = std::accumulate(std::to_string(std::abs(b)).begin(), std::to_string(std::abs(b)).end(), 0, 
        [](int sum, char c) {
            return sum + (c - '0');
        });
        if (sumA == sumB) {
            return a < b;
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}

int main() {
    assert(issame({-76, -21, 0, 4, 23, 6, 6}, order_by_points({0, 6, 6, -76, -21, 23, 4})));
    return 0;
}