#include <unordered_map>
#include <vector>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (map.find(complement) != map.end()) {
            result.push_back({std::min(nums[i], complement), std::max(nums[i], complement)});
        }
        
        map[nums[i]] = i;
    }
    
    return result;
}