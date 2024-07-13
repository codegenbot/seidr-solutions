```cpp
#include <unordered_map>
#include <vector>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::pair<int, int>(complement, nums[i]);
        }
        numMap[nums[i]] = i;
    }
    
    return std::pair<int, int>(-1, -1);
}