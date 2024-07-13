int basement(std::vector<int>& nums) {
    int sum = 0;
    bool became_negative = false;

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        sum += *it;
        if (sum < 0 && !became_negative) {
            return std::distance(nums.begin(), it);
        } else if (sum >= 0) {
            became_negative = false;
        }
    }

    return -1;

}