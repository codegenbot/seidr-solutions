int basement(vector<int>& nums) {
    int sum = 0;
    int minSumIndex = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            minSumIndex = i + 1; 
            break;
        } else if (minSumIndex == -1 && sum <= 0) {
            minSumIndex = i + 1;
        }
    }
    return minSumIndex == -1 ? -1 : minSumIndex; 
}