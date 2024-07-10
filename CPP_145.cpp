#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [&](int a, int b) {
        int sum_a = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        int sum_b = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}