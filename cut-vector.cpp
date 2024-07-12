int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = accumulate(nums.begin(), nums.begin() + i, 0);
        int sum2 = accumulate(nums.begin() + i, nums.end(), 0);
        int currentDiff = abs(sum1 - sum2);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            idx = i;
        }
    }
    
    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = idx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}