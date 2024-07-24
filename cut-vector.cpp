int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int diff = INT_MAX;
    int idx = -1;
    for (int i = 1; i < nums.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j) leftSum += nums[j];
        for (int j = i; j < nums.size(); ++j) rightSum += nums[j];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}