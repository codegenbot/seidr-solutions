int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > 0) sum = 0; 
        if (sum < 0) return i + 1; 
    }
    return -1; 
}