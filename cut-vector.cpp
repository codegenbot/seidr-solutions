int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int index = 0;
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            index = i;
        }
    }
    
    for (int i = 0; i < index; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    for (int i = index; i < n; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}