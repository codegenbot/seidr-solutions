int basement(std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int total = 0;
        int start = i;
        while (start < nums.size()) {
            total += nums[start];
            if (total < 0)
                return start; 
            start++;
        }
    }
    return -1; 
}