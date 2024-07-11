#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            leaders.push_back(nums[i]);
            maxLeader = nums[i];
        }
    }
    leaders.push_back(maxLeader);
    
    std::reverse(leaders.begin(), leaders.end()); // Reverse leaders vector to maintain the order
    
    return leaders;
}