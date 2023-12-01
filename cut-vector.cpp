std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int idx = 0;
    
    while (currSum <= target) {
        currSum += nums[idx++];
    }
    
    if (currSum > target) {
        idx--;
    }
    
    std::vector<int> subvector1(nums.begin(), nums.begin() + idx);
    std::vector<int> subvector2(nums.begin() + idx, nums.end());
    
    return std::make_pair(subvector1, subvector2);
}