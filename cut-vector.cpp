int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int prefixSum = 0;
    int minDiff = INT_MAX;
    int cutIdx = -1;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        int remainingSum = totalSum - prefixSum;
        int diff = abs(prefixSum - remainingSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }

    for (int i = 0; i <= cutIdx; ++i) {
        cout << nums[i] << endl;
    }

    cout << endl;

    for (int i = cutIdx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}