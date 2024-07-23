int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int prefixSum[n + 1];
    prefixSum[0] = 0;
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 0; i < n; ++i) {
        int diff = abs(2 * prefixSum[i] - prefixSum[n]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}