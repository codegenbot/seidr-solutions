#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int maxRight = nums.back();
    
    leaders.push_back(maxRight);
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}