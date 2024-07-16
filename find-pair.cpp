std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::set<int> seen;
    
    for (int num : nums) {
        if (seen.count(target - num)) {
            return {{num, target - num}};
        }
        seen.insert(num);
    }
    
    // If no pair found, return an empty vector
    return {};
}