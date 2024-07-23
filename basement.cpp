int basement(const std::vector<int>& nums) {
    int sum = 0;
    int minIndex = -1; 
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && minIndex == -1)
            minIndex = i;
        else if (sum >= 0 && minIndex != -1)  
            return minIndex + 1; 
    }
    return -1; 
}