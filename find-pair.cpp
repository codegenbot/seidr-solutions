#include <utility>
#include <unordered_map>

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {nums[i], complement};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}