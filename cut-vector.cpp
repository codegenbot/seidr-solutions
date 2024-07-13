int main() {
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    int cut_position = -1;
    for (int i = 1; i < n; ++i) {
        int sum_left = 0;
        int sum_right = 0;
        for (int j = 0; j < i; ++j) {
            sum_left += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sum_right += nums[j];
        }
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_position = i;
        }
    }
    
    for (int i = 0; i < cut_position; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_position; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}