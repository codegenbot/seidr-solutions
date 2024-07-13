int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        int diff = abs(2 * prefix_sum - sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> subvec1(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> subvec2(nums.begin() + cut_index + 1, nums.end());
    
    for (int num : subvec1) {
        cout << num << "\n";
    }
    
    for (int num : subvec2) {
        cout << num << "\n";
    }
    
    return 0;
}