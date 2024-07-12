#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> result = nums;
    sort(result.begin(), result.end(), [](int a, int b) {
        int sum_a = abs(a), sum_b = abs(b);
        while (sum_a >= 10) sum_a = sum_a / 10 + sum_a % 10;
        while (sum_b >= 10) sum_b = sum_b / 10 + sum_b % 10;
        return sum_a == sum_b ? a < b : sum_a < sum_b;
    });
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    std::cout << "Test Passed!" << std::endl;
    return 0;
}