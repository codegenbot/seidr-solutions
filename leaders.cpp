#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = nums.back();
    leaders.push_back(maxRight);
    
    for(int i = nums.size() - 2; i >= 0; i--) {
        if(nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}