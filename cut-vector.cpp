int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum_left = accumulate(nums.begin(), nums.begin() + i, 0);
        int sum_right = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(sum_left - sum_right);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i < cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cut_idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}