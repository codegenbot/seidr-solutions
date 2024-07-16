int basement(vector<int> &nums) {
    int cumsum = 0;
    for (int i = 0; i < nums.size(); i++) {
        cumsum += nums[i];
        if (cumsum < 0) return i+1; 
    }
    return -1; 
}