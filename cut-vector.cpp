pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int leftSum = 0, rightSum = 0;
    for (int i = 1; i < nums.size(); ++i) {
        leftSum += nums[i - 1];
        rightSum += nums[i];
        if (abs(leftSum - rightSum) <= minDiff) {
            minDiff = abs(leftSum - rightSum);
        }
    }
    return {{nums.begin(), nums.begin() + minDiff}, {nums.begin() + minDiff, nums.end()}};
}