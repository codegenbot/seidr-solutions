vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int curr_leader = nums[n - 1];
    leaders.push_back(curr_leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= curr_leader) {
            curr_leader = nums[i];
            leaders.insert(leaders.begin(), curr_leader);
        }
    }
    
    return leaders;
}