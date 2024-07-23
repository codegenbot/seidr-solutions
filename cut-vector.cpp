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
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; ++j) {
            sum_left += nums[j];
        }
        for (int j = i + 1; j < n; ++j) {
            sum_right += nums[j];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}