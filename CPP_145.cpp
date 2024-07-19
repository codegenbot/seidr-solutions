#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end(), [](int a, int b) {
        int sumDigitsA = 0, sumDigitsB = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;
        while (a > 0) {
            sumDigitsA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumDigitsB += b % 10;
            b /= 10;
        }
        if (sumDigitsA == sumDigitsB) {
            return a < b;
        }
        return sumDigitsA < sumDigitsB;
    });
    return sortedNums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    std::cout << "Test passed successfully." << std::endl;
    return 0;
}