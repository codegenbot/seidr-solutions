std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    long long diff = std::numeric_limits<long long>::max();
    int index = 0;

    if (n == 1) {
        return std::make_pair(nums, std::vector<int>());
    }

    for (int i = 0; i < n-1; i++) {
        long long leftSum = 0;
        long long rightSum = 0;

        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }

        for (int j = i+1; j < n; j++) {
            rightSum += nums[j];
        }

        long long currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index + 1, nums.end());

    if (index == n - 2) {
        leftSubvector = std::vector<int>();
        rightSubvector = nums;
    }

    return std::make_pair(leftSubvector, rightSubvector);
}