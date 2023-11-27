std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int leftSum = nums[0];
    int rightSum = 0;
    for (int i = 1; i < nums.size(); i++) {
        rightSum += nums[i];
    }
    
    int minDiff = std::abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1), std::vector<int>(nums.begin() + cutIndex + 1, nums.end()));
}