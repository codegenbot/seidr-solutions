```cpp
std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.count(complement)) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {};
}