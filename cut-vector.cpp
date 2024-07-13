#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int findCutIndex(vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

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

void printSubvector(vector<int>& nums, int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int cutIndex = findCutIndex(nums);

    cout << "Left subvector: ";
    printSubvector(nums, 0, cutIndex);
    cout << "Right subvector: ";
    printSubvector(nums, cutIndex + 1, nums.size() - 1);

    return 0;
}