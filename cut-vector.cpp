int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    int curSum = 0;
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        curSum += nums[i];
        if (curSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> sub1(nums.begin(), nums.begin() + idx + 1);
    vector<int> sub2(nums.begin() + idx + 1, nums.end());
    
    for (int i = 0; i < sub1.size(); ++i) {
        cout << sub1[i] << endl;
    }
    for (int i = 0; i < sub2.size(); ++i) {
        cout << sub2[i] << endl;
    }
    
    return 0;
}