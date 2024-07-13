int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int prefix = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n; i++) {
        prefix += nums[i];
        int suffix = sum - prefix;
        int diff = abs(prefix - suffix);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}