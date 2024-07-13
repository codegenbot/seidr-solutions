int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum1 = 0, sum2 = 0;
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        sum1 += nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum1 -= nums[i];
        sum2 += nums[i];
        
        int currentDiff = abs(sum1 - sum2);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}