int basement(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) return j;
        }
    }
    return -1;
}