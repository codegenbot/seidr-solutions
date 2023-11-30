std::vector<std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = nums[0];

    for (int i = 0; i < n - 2; i++) {
        int rightSum = totalSum - leftSum;
        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff <= diff) {
            diff = currentDiff;
            index = i;
        }

        leftSum += nums[i + 1];
    }

    if (index == -1) return { nums };

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 2);
    std::vector<int> rightSubvector(nums.begin() + index + 2, nums.end());

    return { leftSubvector, rightSubvector };
}