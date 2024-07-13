#include <iostream>
using namespace std;

int findCutIndex(vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int cutIndex = -1;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return cutIndex;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int cutIndex = findCutIndex(nums);

    for (int i = 0; i <= cutIndex; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = cutIndex + 1; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}