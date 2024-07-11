int findNegativeSumIndex(const std::vector<int>& nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        res += nums[i];
        if (res < 0) {
            return i;
        }
    }
    return -1;
}