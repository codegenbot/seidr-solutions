int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int total = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    int best_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - (total - prefix_sum));
        if (diff < best_diff) {
            best_diff = diff;
            cut_idx = i;
        }
    }
    
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}