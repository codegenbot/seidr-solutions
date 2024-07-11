vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = abs(nums[i+1] - nums[i]);
        if(diff < min_diff || (min_diff == INT_MAX && i == 0)) {
            min_idx = i;
            min_diff = diff;
        }
    }
    if(min_idx == -1) {
        return {{}, {}};
    } else {
        vector<int> left(min_idx+1), right(n-min_idx-1);
        for(int i=0; i<=min_idx; i++) left.push_back(nums[i]);
        for(int i=min_idx+1; i<n; i++) right.push_back(nums[i]);
        return {{left}, {right}};
    }
}