int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        
        for (int j = i; j < nums.size(); ++j) {
            rightSum += nums[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}