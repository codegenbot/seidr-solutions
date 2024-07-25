#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = abs(a), sum_b = abs(b);
        while (sum_a >= 10) sum_a = sum_a / 10 + sum_a % 10;
        while (sum_b >= 10) sum_b = sum_b / 10 + sum_b % 10;
        if (sum_a == sum_b) return &a - &b;
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}