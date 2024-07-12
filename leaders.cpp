vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    if(nums.empty()) {
        return leaders;
    }
    
    int max_right = nums.back();
    leaders.push_back(max_right);
    
    for(int i = nums.size() - 2; i >= 0; --i) {
        if(nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(max_right);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = findLeaders(nums);

    for(int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}