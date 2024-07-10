#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> res;
    
    if (n == 0) return res;
    
    res.push_back(nums.back());
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= nums.back()) {
            res.push_back(nums[i]);
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}