````
#include <vector>
#include <unordered_map>

std::pair<const int, const int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::pair<const int, const int>(complement, nums[i]);
        }
        numMap[nums[i]] = i;
    }
    
    return std::pair<const int, const int>(-1, -1);
}
```