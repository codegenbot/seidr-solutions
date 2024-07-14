#include <vector>

std::vector<int> leaders(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> res;
    
    if (n == 0) return res;
    
    int lastLeaderIndex = n - 1;
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= nums[lastLeaderIndex]) {
            res.push_back(nums[i]);
            lastLeaderIndex = i;
        }
    }
    
    res.push_back(nums[n-1]);
    return res;
}