int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int current_diff = abs(left_sum - right_sum);
        
        if (current_diff < diff) {
            diff = current_diff;
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}