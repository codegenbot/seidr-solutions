vector<int> findLeaders(vector<int> nums) {
    vector<int> ans;
    int n = nums.size();
    int leader = nums[n - 1];
    ans.push_back(leader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= leader) {
            leader = nums[i];
            ans.insert(ans.begin(), leader);
        }
    }
    return ans;
}