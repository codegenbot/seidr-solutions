int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(sum - 2 * prefix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> subvector2(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}