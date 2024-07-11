int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cut = -1;
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int current_diff = abs(left_sum - right_sum);
        if (current_diff < diff) {
            diff = current_diff;
            cut = i;
        }
    }
    
    for (int i = 0; i < cut; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cut; i < n; ++i) {
        cout << nums[i] << endl;
    }
    return 0;
}