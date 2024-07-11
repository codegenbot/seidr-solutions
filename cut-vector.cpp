int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0, min_diff = INT_MAX, cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - (sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index + 1; i < n; ++i) {
        if (i != cut_index + 1) {
            cout << endl;
        }
        cout << nums[i];
    }
    
    return 0;
}