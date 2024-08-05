#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = abs(a), sum_b = abs(b);
        while (sum_a >= 10) sum_a = sum_a / 10 + sum_a % 10;
        while (sum_b >= 10) sum_b = sum_b / 10 + sum_b % 10;
        if (sum_a == sum_b) return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    auto issame = [](std::vector<int> a, std::vector<int> b) {
        return a == b;
    };

    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}