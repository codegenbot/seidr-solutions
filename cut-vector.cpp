int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;

    int prefixSum = 0;
    int closest = INT_MAX;
    int idx = -1;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int diff = abs(target - prefixSum);
        if (diff < closest) {
            closest = diff;
            idx = i;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }

    if (prefixSum - closest != 0) {
        cout << target - (prefixSum - closest) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}