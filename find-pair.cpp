vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> seen;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        if (seen.find(complement) != seen.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        
        seen[nums[i]] = i;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;
    
    vector<int> result = findPair(nums, target);
    for (int num : result) {
        cout << num << endl;
    }
    
    return 0;
}