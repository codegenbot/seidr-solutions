int basement(std::vector<int> nums) {
    int total_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        if (total_sum < 0) { 
            return i;
        }
    }
    return -1;
}