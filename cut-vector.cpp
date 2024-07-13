#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

using namespace std;

void cutVector(const vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; i++) cout << nums[i] << " ";
    cout << endl;
    for (int i = cutIndex + 1; i < n; i++) cout << nums[i] << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {6310, 2545, 5656, 5646};
    cutVector(nums);
    return 0;
}