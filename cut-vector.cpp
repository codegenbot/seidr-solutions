int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> right(nums.begin() + cutIndex + 1, nums.end());
    
    for (int num : left) {
        cout << num << endl;
    }
    
    cout << 0 << endl;
    
    for (int num : right) {
        cout << num << endl;
    }
    
    return 0;
}