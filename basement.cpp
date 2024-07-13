int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) sum -= nums[i-1];
        sum += nums[i];
        if (sum < 0) return i+1;
    }
    return -1;
}