#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int rightmost = nums.back();
    std::vector<int> leaders;
    
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= rightmost) {
            leaders.push_back(nums[i]);
            rightmost = nums[i];
        }
    }
    
    return leaders;
}