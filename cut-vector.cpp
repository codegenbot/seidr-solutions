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
    int idx = 0;
    
    while (idx < n && prefixSum + nums[idx] <= target) {
        prefixSum += nums[idx];
        idx++;
    }
    
    if (abs(sum - 2 * prefixSum) < abs(sum - 2 * (prefixSum - nums[idx]))) {
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i <= idx; ++i) {
            cout << nums[i] << endl;
        }
    }
    
    return 0;
}