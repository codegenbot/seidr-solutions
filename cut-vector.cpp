int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n - 1; i++) {
        int left = 0, right = 0;
        for (int j = 0; j <= i; j++) left += nums[j];
        for (int j = i + 1; j < n; j++) right += nums[j];
        int curr_diff = abs(left - right);
        if (curr_diff < diff) {
            diff = curr_diff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; i++) {
        cout << nums[i] << endl;
    }
    for (int i = idx + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}