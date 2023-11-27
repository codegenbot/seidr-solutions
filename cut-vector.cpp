pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    int diff = numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n-1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    if (cutIndex == -1) {
        leftSubvector.clear();
    }

    return make_pair(leftSubvector, rightSubvector);
}