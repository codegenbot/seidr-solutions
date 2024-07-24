int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int idx = 0;
    int min_diff = abs(nums[0] - nums[n-1]);
    for (int i = 1; i < n-1; ++i) {
        if (abs(nums[i] - nums[i+1]) < min_diff) {
            min_diff = abs(nums[i] - nums[i+1]);
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    for (int i = idx+1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}