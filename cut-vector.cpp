int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 1; i < n; ++i) {
        if (abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0)) < diff) {
            diff = abs(accumulate(nums.begin(), nums.begin() + i, 0) - accumulate(nums.begin() + i, nums.end(), 0));
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}