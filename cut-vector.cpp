int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int total = accumulate(nums.begin(), nums.end(), 0);
    int sum = 0;
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        int currDiff = abs(total - 2 * sum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}