#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> sorted_nums = nums;
    std::sort(sorted_nums.begin(), sorted_nums.end(), [=](int a, int b) {
        auto digit_sum = [](int num) {
            int sum = 0;
            for (char c : std::to_string(abs(num))) {
                sum += c - '0';
            }
            return sum;
        };

        int sum_a = digit_sum(a);
        int sum_b = digit_sum(b);

        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return sorted_nums;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}