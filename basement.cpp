int getFirstNegativeIndex(vector<int>& nums) {
    int sum = 0, i = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
        i++;
    }
    return -1;
}