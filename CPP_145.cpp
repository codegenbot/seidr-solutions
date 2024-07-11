#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> order_by_points(const std::vector<int>& nums) {
    // Implement logic for ordering nums by points
}

int main() {
    std::vector<int> nums = {0, 6, 6, -76, -21, 23, 4};
    
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (issame(order_by_points(a), order_by_points(b))) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    
    return 0;
}