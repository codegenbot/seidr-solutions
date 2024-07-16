std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::pair<int, int>> result;
    
    auto it1 = nums.begin();
    auto it2 = nums.end() - 1;
    
    while (it1 != it2) {
        int sum = *it1 + *it2;
        if (sum == target) {
            result = {{*it1, *it2}};
            break;
        } else if (sum < target) {
            ++it1;
        } else {
            --it2;
        }
    }
    
    return result;
}