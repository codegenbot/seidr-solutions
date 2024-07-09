int basement(std::vector<int> nums) {
    int sum = 0;
    int idx = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && idx == -1) { 
            idx = i;
        } else if (idx != -1) break; // stop the loop
    }
    return idx;
}