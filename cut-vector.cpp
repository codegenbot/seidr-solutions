pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int minDiff = INT_MAX;
    int cutIndex = 0;

    int leftSum = 0;
    int rightSum = totalSum;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex + 1), vector<int>(nums.begin() + cutIndex + 1, nums.end())};
}