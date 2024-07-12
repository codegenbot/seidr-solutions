int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < n; ++j) {
            right_sum += nums[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}