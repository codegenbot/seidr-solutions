int basement(std::vector<int>& nums) {
    int sum = 0;
    int result = -1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            result = i;
            break;
        }
    }

    return result;
}