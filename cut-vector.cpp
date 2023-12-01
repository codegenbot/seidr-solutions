std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = abs(leftSum - rightSum);

        if (currentDiff == 0) {
            index = i;
            break;
        }

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) {
        index = n - 1;
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
}