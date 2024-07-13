int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total = 0;
    for (int i = 0; i < nums.size(); ++i) {
        total += nums[i];
    }
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        prefix_sum += nums[i];
        int suffix_sum = total - prefix_sum;
        int diff = abs(prefix_sum - suffix_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}