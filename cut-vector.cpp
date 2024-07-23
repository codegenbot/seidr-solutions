int main() {
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int minDiff = INT_MAX;
    int index = -1;
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += nums[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    for (int i = 0; i < index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = index; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}