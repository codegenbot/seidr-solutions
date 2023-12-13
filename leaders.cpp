#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxNum = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            leaders.push_back(nums[i]);
            maxNum = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}