#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int findCutIndex(const vector<int>& nums) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0, rightSum = totalSum;
    int cutIndex = -1, minDiff = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return cutIndex;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int cutIndex = findCutIndex(nums);

    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = cutIndex + 1; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}