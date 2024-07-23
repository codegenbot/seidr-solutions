int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int diff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < n - 1; ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < n; ++j) {
            rightSum += nums[j];
        }
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}