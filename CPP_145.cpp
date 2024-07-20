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

std::vector<int> order_by_points(const std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
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

int main() {
    // Test the implementation
    std::vector<int> test_nums = {-76, -21, 0, 4, 23, 6, 6};
    std::vector<int> ordered_nums = order_by_points(test_nums);
    
    // Add your own test cases here
    assert(issame(ordered_nums, {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}