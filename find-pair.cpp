```cpp
#include <vector>
#include <unordered_map>
#include <initializer_list>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, std::vector<int>> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            for (int j : std::initializer_list<int>{numMap[complement].begin(), numMap[complement].end()})
                return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]].push_back(i);
    }
    return std::make_pair(-1, -1);
}