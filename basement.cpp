#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i; // Return the current index i instead of i + 1
        }
    }
    return -1; // If no negative sum found
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}