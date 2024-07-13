int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    int prefix_sum = 0, min_diff = INT_MAX;
    int cut_idx = -1;
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs((sum - prefix_sum) - prefix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    cout << "1" << endl;
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;
    
    return 0;
}