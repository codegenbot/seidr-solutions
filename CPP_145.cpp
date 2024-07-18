#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a) { sumA += a % 10; a /= 10; }
        while (b) { sumB += b % 10; b /= 10; }
        if (sumA == sumB) return false;
        return sumA < sumB;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}