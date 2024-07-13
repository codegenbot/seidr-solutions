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
        int sumLeft = 0;
        int sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += nums[j];
        }
        for (int j = i; j < n; ++j) {
            sumRight += nums[j];
        }
        int currentDiff = abs(sumLeft - sumRight);
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