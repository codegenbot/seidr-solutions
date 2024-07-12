int basement(std::vector<int> nums) {
    int sum = INT_MIN;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}