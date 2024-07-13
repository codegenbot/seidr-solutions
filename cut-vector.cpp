int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    
    int prefix_sum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        if (prefix_sum >= target) {
            idx = i;
            break;
        }
    }
    
    if (abs(sum - 2 * prefix_sum) < abs(sum - 2 * (prefix_sum - nums[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx - 1; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }
    
    return 0;
}