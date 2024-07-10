std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxNum = INT_MIN;
    
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxNum) {
            leaders.push_back(nums[i]);
            maxNum = nums[i];
        }
    }
    std::reverse(leaders.begin(), leaders.end());

    return leaders;
}