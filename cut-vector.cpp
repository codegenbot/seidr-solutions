int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cut = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        
        for (int j = i; j < n; ++j) {
            right_sum += nums[j];
        }
        
        int current_diff = abs(left_sum - right_sum);
        
        if (current_diff < diff) {
            diff = current_diff;
            cut = i;
        }
    }
    
    for (int i = 0; i < cut; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cut; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}