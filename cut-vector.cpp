int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        totalSum += nums[i];
    }
    int halfSum = totalSum / 2;
    int leftSum = 0;
    int i;
    for (i = 0; i < n; ++i) {
        leftSum += nums[i];
        if (leftSum >= halfSum) {
            break;
        }
    }
    if (abs(totalSum - 2 * leftSum) < abs(totalSum - 2 * (leftSum - nums[i]))) {
        cout << i + 1 << endl;
        for (int j = 0; j <= i; ++j) {
            cout << nums[j] << endl;
        }
        cout << 0 << endl;
    } else {
        cout << i << endl;
        for (int j = 0; j < i; ++j) {
            cout << nums[j] << endl;
        }
        cout << nums[i] << endl;
    }
    return 0;
}