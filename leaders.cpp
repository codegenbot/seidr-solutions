#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    if (n == 0) return result;
    
    for (int i = n - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] >= nums[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) result.push_back(nums[i]);
    }
    
    return result;
}