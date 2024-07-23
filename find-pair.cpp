```cpp
#include <vector>
#include <utility>
#include <unordered_map>

std::pair<int, int> findPair(vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            int start = min(nums[i], complement);
            int end = max(nums[i], complement);
            return {start, end};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}