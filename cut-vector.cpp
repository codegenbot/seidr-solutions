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
    int idx = 0;
    while (prefixSum < target) {
        prefixSum += nums[idx];
        idx++;
    }
    
    if (prefixSum == target) {
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i < idx; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }
    
    return 0;
}