vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int index = 0;
    for(int i=1; i<n; i++){
        if(abs(nums[i] - nums[i-1]) < min_diff){
            min_diff = abs(nums[i] - nums[i-1]);
            index = i;
        }
    }
    vector<int> left(vector<int>(nums.begin(), nums.begin()+index));
    vector<int> right(vector<int>(nums.begin()+index, nums.end()));
    return {{left}, {right}};
}