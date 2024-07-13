#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        auto it = std::lower_bound(nums.begin() + i + 1, nums.end(), complement);
        
        if (it != nums.end() && *it == complement) {
            return std::pair<int, int>(complement, nums[i]);
        }
    }
    
    return std::pair<int, int>(-1, -1);
}