int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += nums[i];
    }
    int leftSum = 0, rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;
    return 0;
}