```
std::vector<std::vector<int>> cutVector(std::vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int index = 0;
    for(int i=1; i<n; i++){
        if(abs(nums[i] - nums[i-1]) < min_diff){
            min_diff = abs(nums[i] - nums[i-1]);
            index = i;
        }
    }
    std::vector<int> left(std::vector<int>(nums.begin(), nums.begin()+index));
    std::vector<int> right(std::vector<int>(nums.begin()+index, nums.end()));
    return {{left}, {right}};
}