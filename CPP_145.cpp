#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

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
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}