#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    size_t n;
    std::cin >> n;
    if (n == 0) {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    std::vector<int> nums(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    std::cout << basement(nums) << std::endl;
    return 0;
}