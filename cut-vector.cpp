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
    int cutIndex = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            cutIndex = i;
            break;
        }
    }
    
    if (abs(prefixSum - target) < abs(prefixSum - nums[cutIndex] - target)) {
        cutIndex -= 1;
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}