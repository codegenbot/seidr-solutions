```cpp
#include <vector>

#include <utility>

#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return std::pair<int, int>(complement < nums[i] ? complement : nums[i], nums[i]);
        }
        numIndex[nums[i]] = i;
    }
    return {};
}