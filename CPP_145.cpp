#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = std::abs(a), temp_b = std::abs(b);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return std::find(nums.begin(), nums.end(), a) < std::find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });
    return nums;
}