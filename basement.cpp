int basement(std::vector<int> nums) {
    int sum = nums[0];
    int i;
    for (i = 1; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return i;
}