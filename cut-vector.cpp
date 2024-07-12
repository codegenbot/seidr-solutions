int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    
    int total = accumulate(nums.begin(), nums.end(), 0);
    int sum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        int diff = abs(total - 2 * sum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    
    for (int i = cutIndex + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}