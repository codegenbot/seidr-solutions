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
    int closestSum = INT_MAX;
    int cutIdx = 0;
    
    for (int i = 0; i < n; ++i) {
        prefixSum += nums[i];
        int diff = abs(target - prefixSum);
        if (diff < closestSum) {
            closestSum = diff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}