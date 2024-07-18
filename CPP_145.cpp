#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        int tempA = abs(a), tempB = abs(b);
        while (tempA > 0) {
            sumA += tempA % 10;
            tempA /= 10;
        }
        while (tempB > 0) {
            sumB += tempB % 10;
            tempB /= 10;
        }
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });
    return nums;
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == std::vector<int>{-76, -21, 0, 4, 23, 6, 6});
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}