int basement(std::vector<int>& nums) {
    int sum = 0;
    int previousSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && previousSum >= 0)
            return i + 1;
        else 
            previousSum = sum;
    }
    return -1; // return -1 if no such index exists
}