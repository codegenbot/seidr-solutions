int main() {
    int n;
    vector<int> nums;

    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0, rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIdx = 0;

    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }

    vector<int> subVec1(nums.begin(), nums.begin() + cutIdx + 1);
    vector<int> subVec2(nums.begin() + cutIdx + 1, nums.end());

    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }

    return 0;
}