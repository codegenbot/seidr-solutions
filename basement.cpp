int basementIndex(vector<int>& nums) {
    int maxNegIndex = -1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && i > maxNegIndex) {
            maxNegIndex = i;
        }
    }
    return maxNegIndex;
}