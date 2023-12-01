#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        return sumA == sumB ? a < b : sumA < sumB;
    });
    return nums;
}

int main() {
    assert (order_by_points({0,6,6,-76,-21,23,4}) == std::vector<int>{-76, -21, 0, 4, 23, 6, 6});
}