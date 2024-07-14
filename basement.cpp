int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum + nums[i] < 0)
            return i + 1;
        sum += nums[i];
    }
    return -1;

}