vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    if(n == 0) {
        return leaders;
    }
    int curr_leader = nums[n-1];
    leaders.push_back(curr_leader);
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] >= curr_leader) {
            curr_leader = nums[i];
            leaders.push_back(curr_leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}