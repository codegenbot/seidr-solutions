int basement(std::vector<int> nums) {
    int sum = 0;
    int lastNonNegativeIndex = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0) { 
            lastNonNegativeIndex = i;
        } else if (sum < 0 && lastNonNegativeIndex != -1) { 
            return lastNonNegativeIndex + 1;
        }
    }
    return -1; 
}