#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int max = nums.back();
    leaders.push_back(max);
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max) {
            leaders.push_back(nums[i]);
            max = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}