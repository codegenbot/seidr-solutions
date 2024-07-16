int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int diff = INT_MAX;
    int cutIdx = 0;

    for (int i = 1; i < nums.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            rightSum += nums[j];
        }

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIdx = i;
        }
    }

    for (int i = 0; i < cutIdx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIdx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}