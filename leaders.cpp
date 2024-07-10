#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> res;
    
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        
        for (int j = i + 1; j < n; j++) {
            if (nums[j] >= nums[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            res.push_back(nums[i]);
        }
    }
    
    return res;
}