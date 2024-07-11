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
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    if (abs(prefixSum - target) < abs(prefixSum - target - nums[idx])) {
        ++idx;
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}