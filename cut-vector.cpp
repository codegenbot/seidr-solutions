int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; ++j) {
            rightSum += nums[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff || (currentDiff == diff && nums[i-1] == nums[i])) {
            diff = currentDiff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i < cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIdx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}