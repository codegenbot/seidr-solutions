int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    
    int curr_sum = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        curr_sum += nums[i];
        if (curr_sum >= half_sum) {
            idx = i;
            break;
        }
    }
    
    if (abs(curr_sum - half_sum) < abs(curr_sum - nums[idx] - half_sum)) {
        ++idx;
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}