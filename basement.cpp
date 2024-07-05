int basement(vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return -1; // If sum becomes negative, return the current index. Otherwise, continue the loop until all elements are processed.
    }
    return -1; 
}