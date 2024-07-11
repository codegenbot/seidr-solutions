```cpp
pair<int, int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == target) return make_pair(nums[i], nums[j]);
        if (sum < target) i++;
        else j--;
    }
    return make_pair(0, 0);
}