int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += nums[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i < cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}