int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int left_sum = 0, right_sum = accumulate(nums.begin(), nums.end(), 0);
    int min_diff = INT_MAX, best_cut = 0;
    
    for (int i = 0; i < n; i++) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            best_cut = i;
        }
    }
    
    for (int i = 0; i <= best_cut; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = best_cut + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}