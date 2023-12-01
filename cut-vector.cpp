pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int sum = 0, leftSum = 0, minDiff = INT_MAX, cutIndex = -1;

    // Calculate the sum of all numbers in the vector
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    // Find the spot where the difference between the left and right sums is minimum
    for (int i = 0; i < n - 1; i++) {
        leftSum += nums[i];
        int rightSum = sum - leftSum;
        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Split the vector at the cutIndex
    vector<int> left(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> right(nums.begin() + cutIndex + 1, nums.end());

    return make_pair(left, right);
}

int main() {
    // Read input
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Call the cutVector function to find the two resulting subvectors
    pair<vector<int>, vector<int>> result = cutVector(nums);

    // Output the two resulting subvectors
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }

    return 0;
}