int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int minDiff = INT_MAX;
    int idx = 0;
    
    for (int i = 0; i < nums.size() - 1; ++i) {
        int diff = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
        
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}