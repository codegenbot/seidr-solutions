int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    
    int cur_sum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        cur_sum += nums[i];
        if (cur_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    if (abs(sum - 2 * cur_sum) < abs(sum - 2 * (cur_sum - nums[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << nums[idx] << endl;
        cout << 0 << endl;
    }
    
    return 0;
}