int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        sum2 += nums[i];
    }
    
    int best_diff = INT_MAX, best_idx = 0;
    for (int i = 0; i < n; ++i) {
        sum1 += nums[i];
        sum2 -= nums[i];
        
        if (abs(sum1 - sum2) < best_diff) {
            best_diff = abs(sum1 - sum2);
            best_idx = i;
        }
    }
    
    for (int i = 0; i <= best_idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = best_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}