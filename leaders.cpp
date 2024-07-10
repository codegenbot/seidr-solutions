#include <vector>

std::vector<int> leaders(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result;
    
    for(int i = n - 1; i >= 0; --i) {
        if(i == n - 1 || nums[i] >= nums[i + 1]) {
            result.push_back(nums[i]);
        }
    }
    
    return result;
}