#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int abs_a = abs(a);
        int abs_b = abs(b);
        int sum_a = std::accumulate(std::to_string(abs_a).begin(), std::to_string(abs_a).end(), 0) - '0' * std::to_string(abs_a).size();
        int sum_b = std::accumulate(std::to_string(abs_b).begin(), std::to_string(abs_b).end(), 0) - '0' * std::to_string(abs_b).size();
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