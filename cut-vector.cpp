int main() {
    vector<int> nums;
    int n;
    
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        
        for (int k = i; k < nums.size(); ++k) {
            right_sum += nums[k];
        }
        
        int current_diff = abs(left_sum - right_sum);
        
        if (current_diff < min_diff) {
            min_diff = current_diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cut_index; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}