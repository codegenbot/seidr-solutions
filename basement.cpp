int getFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && i == nums.size() - 1) {
            return i;
        }
    }
    return -1;
}