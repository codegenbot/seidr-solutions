int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int index = -1;
    for (int i = 1; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int k = i; k < n; ++k) {
            right_sum += nums[k];
        }
        int current_diff = abs(left_sum - right_sum);
        if (current_diff < diff) {
            diff = current_diff;
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