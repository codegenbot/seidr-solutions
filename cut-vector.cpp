int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int prefixSum = 0, suffixSum = 0;
    int minDiff = INT_MAX, cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        suffixSum += nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        suffixSum -= nums[i];
        
        if (abs(prefixSum - suffixSum) < minDiff) {
            minDiff = abs(prefixSum - suffixSum);
            cutIndex = i;
        }
        
        prefixSum += nums[i];
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}