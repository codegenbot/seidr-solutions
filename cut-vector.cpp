int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int idx = 0;
    int min_diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int sum_left = 0;
        int sum_right = 0;
        
        for (int j = 0; j < i; j++) {
            sum_left += nums[j];
        }
        
        for (int j = i; j < n; j++) {
            sum_right += nums[j];
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = idx + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}