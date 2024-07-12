int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index + 1; i < n; ++i) {
        if (i == cut_index + 1) {
            cout << endl;
        }
        cout << nums[i] << endl;
    }
    
    return 0;
}