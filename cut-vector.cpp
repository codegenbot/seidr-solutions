pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff || (diff == minDiff && abs(leftSum - rightSum) < abs(std::accumulate(nums.begin(), nums.begin() + cutIndex + 1, 0) - std::accumulate(nums.begin() + cutIndex + 1, nums.end(), 0)))) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex + 1), vector<int>(nums.begin() + cutIndex + 1, nums.end())};
}