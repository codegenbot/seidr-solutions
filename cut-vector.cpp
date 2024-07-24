int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum1 = 0, sum2 = accumulate(nums.begin(), nums.end(), 0);
    int idx = 0, diff = INT_MAX;
    
    for (int i = 0; i < n; ++i) {
        sum1 += nums[i];
        sum2 -= nums[i];
        int currDiff = abs(sum1 - sum2);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}