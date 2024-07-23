#include <vector>
#include <cstddef>
#include <iostream>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    int minIndex = -1; 
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1)
            minIndex = i;
        else if (sum >= 0 && minIndex != -1)  
            return minIndex; 
    }
    return -1; 
}

int main() {
    std::vector<int> nums = {-3,2,-3,4,5,1,-12,6,5,1};
    std::cout << basement(nums) << std::endl;
    return 0;
}