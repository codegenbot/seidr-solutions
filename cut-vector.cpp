std::vector<std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n-1; i++) {   
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    if (index == -1) return { nums };

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index);
    std::vector<int> rightSubvector(nums.begin() + index, nums.begin() + index + 2);

    return { leftSubvector, rightSubvector };
}