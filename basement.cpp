int basement(const std::vector<int>& nums) {
    int total = 0;
    int minIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1;
        else 
            minIndex = i + 1;  
    }
    return -1;

}