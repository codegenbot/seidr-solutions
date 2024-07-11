int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefix_sum = 0;
    int idx = 0;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        if (prefix_sum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvector2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << "\n";
    }
    
    for (int num : subvector2) {
        cout << num << "\n";
    }
    
    return 0;
}