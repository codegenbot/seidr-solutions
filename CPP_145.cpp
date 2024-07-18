#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        a = std::abs(a);
        b = std::abs(b);
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        if (sumA == sumB) {
            return std::abs(a) < std::abs(b);
        }
        return sumA < sumB;
    });
    return nums;
}