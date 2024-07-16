std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {std::make_pair(complement, nums[i])};
        }
        numMap[nums[i]] = i;
    }
    
    std::vector<std::pair<int, int>> result;
    for (const auto& pair : numMap) {
        if (numMap.find(target - pair.first) != numMap.end()) {
            result.push_back({std::make_pair(target - pair.first, pair.first)});
        }
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    auto result = findPairs(nums, target);
    for (const auto& pair : result) {
        std::cout << "Pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;