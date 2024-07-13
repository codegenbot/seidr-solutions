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
    
    int prefixSum = 0;
    int diff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        int suffixSum = sum - prefixSum;
        int currentDiff = abs(prefixSum - suffixSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}