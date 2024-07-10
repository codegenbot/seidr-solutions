#include <iostream>
#include <vector>
#include <limits>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0 && sum > 0 && nums[i] > std::numeric_limits<int>::max() - sum) {
            return -1; // Input value exceeds integer data type range
        }
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // If no negative sum found
}

int main() {
    int n;
    std::cin >> n;
    if (n <= 0) {
        std::cout << -1 << std::endl;
        return 0;
    }
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}