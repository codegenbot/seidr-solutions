int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        if (num == 0) {
            break;
        }
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 1; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sum2 += nums[j];
        }
        int currentDiff = abs(sum1 - sum2);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIdx = i;
        }
        if (currentDiff == 0) {
            break;
        }
    }
    
    for (int i = 0; i < cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << cutIdx << endl;
    
    for (int i = cutIdx; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}