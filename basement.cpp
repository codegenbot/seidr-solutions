int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (sum <= 0) sum += nums[i];
        else return i + 1;
    }
    return -1;
}