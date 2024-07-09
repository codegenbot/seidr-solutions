int basement(vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum > 0 && runningSum <= 0)
            return i;
    }
    return -1;
}