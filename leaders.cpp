vector<int> findLeaders(vector<int> nums) {
    int n = nums.size();
    vector<int> leaders;
    int curr_leader = INT_MIN;
    for(int i = n-1; i >= 0; i--) {
        if(nums[i] >= curr_leader) {
            curr_leader = nums[i];
            leaders.push_back(curr_leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}