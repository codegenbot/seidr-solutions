pair<int, int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        int complement = target - nums[i];
        auto it = lower_bound(nums.begin()+i+1, nums.end(), complement);
        if (it != nums.end() && *it == complement) return {nums[i], *it};
    }
    return {-1, -1}; 
}