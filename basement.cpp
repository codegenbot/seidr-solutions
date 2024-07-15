int basement(const std::vector<int>& nums) {
    int sum = 0;
    int targetIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            targetIndex = i;
    }
    return targetIndex;
}