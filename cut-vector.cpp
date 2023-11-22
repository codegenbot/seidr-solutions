#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = 0;

    // Calculate the sum of the entire vector
    for (int num : nums) {
        rightSum += num;
    }

    // Iterate through the vector and find the cut index with minimum difference
    for (int i = 0; i < nums.size() - 1; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }

    // Create the subvectors based on the cut index
    vector<int> left(nums.begin(), nums.begin() + cutIndex);
    vector<int> right(nums.begin() + cutIndex, nums.end());

    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        cout << num << endl;
    }

    for (int num : result.second) {
        cout << num << endl;
    }

    return 0;
}