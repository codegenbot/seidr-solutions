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
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = 0;
    
    while (prefixSum <= target) {
        prefixSum += nums[idx];
        ++idx;
    }
    
    if (abs(sum - 2 * prefixSum) < abs(sum - 2 * (prefixSum - nums[idx - 1]))) {
        --idx;
        prefixSum -= nums[idx];
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << prefixSum << endl;
    
    return 0;
}