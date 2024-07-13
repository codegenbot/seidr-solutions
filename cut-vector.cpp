int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int totalSum = 0;
    for (int n : nums) {
        totalSum += n;
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftSubvec(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvec(nums.begin() + cutIndex + 1, nums.end());

    for (int n : leftSubvec) {
        cout << n << endl;
    }
    for (int n : rightSubvec) {
        cout << n << endl;
    }

    return 0;
}