vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            result.push_back(target - nums[i]);
            result.push_back(nums[i]);
            break;
        }
        mp[nums[i]] = i;
    }
    return result;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    vector<int> result = findPair(nums, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
    
    return 0;
}