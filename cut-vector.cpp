int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cutIndex = -1;
    for (int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}