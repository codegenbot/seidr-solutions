int basement(vector<int>& nums) {
    int running_sum = 0;
    int first_negative_index = -1;
    for (int i = 0; i < nums.size(); i++) {
        running_sum += nums[i];
        if (running_sum < 0) {
            first_negative_index = i;
            break;
        }
    }
    return first_negative_index;
}