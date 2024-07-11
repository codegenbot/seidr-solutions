#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int maxRight = nums.back();
    
    for (int i = nums.size() - 2; i > 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    leaders.push_back(maxRight);
    
    return leaders;
}