#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    // Calculate the total sum of the vector
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += nums[i];
    }

    // Calculate the left sum and right sum for each possible cut index
    int leftSum = 0;
    int rightSum = totalSum;
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];

        // Calculate the absolute difference between left sum and right sum
        int currentDiff = abs(leftSum - rightSum);

        // Update the minimum difference and cut index if necessary
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    // Create the two resulting subvectors
    vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subvector2(nums.begin() + index + 1, nums.end());

    return make_pair(subvector1, subvector2);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
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