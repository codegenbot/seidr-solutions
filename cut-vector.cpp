int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int diff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < nums.size(); ++i) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            rightSum += nums[j];
        }
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}