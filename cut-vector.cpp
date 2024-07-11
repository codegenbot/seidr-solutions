int main() {
    vector<int> nums;
    int num;
    
    // Read input numbers
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 0; i < n - 1; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; ++j) {
            leftSum += nums[j];
        }
        
        for (int j = i + 1; j < n; ++j) {
            rightSum += nums[j];
        }
        
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    
    for (int i = cutIdx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}