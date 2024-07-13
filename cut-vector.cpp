int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    
    int prefixSum = 0;
    int cutIndex = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            if (prefixSum == target || prefixSum - target < target - (prefixSum - nums[i])) {
                cutIndex = i;
                break;
            }
        }
    }
    
    cout << cutIndex + 1 << endl;
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    if (cutIndex != n - 1) {
        cout << sum - prefixSum << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}