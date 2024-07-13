int basement(std::vector<int>& nums) {
    int sum = 0;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        sum += *it;
        if (sum < 0) return std::distance(nums.begin(), it);
        if (sum == 0) sum = 1; 
    }
    return -1;
}