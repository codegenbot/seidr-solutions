int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
    }

    int sum = 0;
    int minDiff = INT_MAX;
    int cutIdx = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        int diff = abs(total - 2 * sum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }

    for (int i = 0; i <= cutIdx; i++) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}