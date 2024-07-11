int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0;
        int sum2 = 0;
        
        for (int j = 0; j < i; ++j) {
            sum1 += nums[j];
        }
        
        for (int j = i; j < n; ++j) {
            sum2 += nums[j];
        }
        
        int currentDiff = abs(sum1 - sum2);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}