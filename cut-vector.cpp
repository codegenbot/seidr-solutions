int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
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
    
    if (abs(sum - 2 * prefixSum) < abs(sum - 2 * (prefixSum - nums[cutIndex]))) {
        ++cutIndex;
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}