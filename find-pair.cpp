vector<int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                return {nums[i], nums[j]};
            }
            j++;
        }
    }
    return {-1, -1};
}