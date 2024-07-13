int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    int cut_idx = -1;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}