#include <iostream>
#include <vector>
#include <limits>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum > 0 && nums[i] > 0 && sum + nums[i] < 0) {
            return i;
        }
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
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