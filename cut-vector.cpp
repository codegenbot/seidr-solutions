int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int half_sum = sum / 2;
    int curr_sum = 0;
    int idx = 0;
    
    while (idx < n && curr_sum + nums[idx] <= half_sum) {
        curr_sum += nums[idx];
        idx++;
    }
    
    if (abs(sum - 2 * curr_sum) < abs(sum - 2 * (curr_sum + nums[idx]))) {
        cout << "1" << endl;
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << sum - curr_sum << endl;
    } else {
        cout << "1" << endl;
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << sum - (curr_sum + nums[idx]) << endl;
    }
    
    return 0;
}