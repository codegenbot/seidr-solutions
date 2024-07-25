int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(prefix_sum - (sum - prefix_sum));
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
        if (min_diff == 0) {
            break;
        }
    }
    
    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}