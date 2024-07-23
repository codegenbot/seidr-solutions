int basement(std::vector<int>& nums) {
    int sum = 0;
    int basementIndex = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && basementIndex == -1)
            basementIndex = i + 1;
    }
    return basementIndex;
}