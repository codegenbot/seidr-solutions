int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        int diff = abs(sum - 2 * prefixSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << endl;
    }

    cout << 0 << endl;

    return 0;
}