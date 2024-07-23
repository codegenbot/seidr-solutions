int basement(std::vector<int>& nums) {
    int sum = 0;
    int basement_index = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            basement_index = i + 1; 
            break; 
        }
    }
    return basement_index;
}