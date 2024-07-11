int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum + nums[i] < 0) {
            sum += nums[i]; // Move this line inside the if block
            return i;
        }
        sum += nums[i]; // Move this line from the original position
    }
    return -1;
}