#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        int temp_a = abs(num);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
    }
    for (int num : b) {
        int temp_b = abs(num);
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
    }
    return sum_a == sum_b;
}

std::vector<int> order_by_points(const std::vector<int>& nums);

int main() {
    // Test the implementation
    std::vector<int> test_nums = {123, 456, 789, 321, 654};
    std::vector<int> ordered_nums = order_by_points(test_nums);

    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}