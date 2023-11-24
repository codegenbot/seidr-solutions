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

        if (leftSum == rightSum) {
            return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + i + 1),
                                  std::vector<int>(nums.begin() + i + 1, nums.end()));
        }

        int currentDiff = abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + index + 1),
                          std::vector<int>(nums.begin() + index + 1, nums.end()));
}