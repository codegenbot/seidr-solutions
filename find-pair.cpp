#include <unordered_map>
#include <vector>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {{complement, nums[i]}};
        }
        numMap[nums[i]] = i;
    }
    
    std::vector<std::pair<int, int>> result;
    for (const auto& pair : numMap) {
        if (numMap.find(target - pair.first) != numMap.end()) {
            result.push_back({target - pair.first, pair.first});
        }
    }
    
    return result;
}