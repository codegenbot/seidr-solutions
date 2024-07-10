#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int target = totalSum / 2;

    int prefixSum = 0;
    int closestSum = INT_MAX;
    int cutPoint = -1;

    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (abs(2 * prefixSum - totalSum) < closestSum) {
            closestSum = abs(2 * prefixSum - totalSum);
            cutPoint = i;
        }
    }

    int left = 0, right = nums.size() - 1;
    int leftSum = 0, rightSum = 0;

    vector<int> leftSub, rightSub;
    
    while (left <= cutPoint || right > cutPoint) {
        if (left <= cutPoint) {
            leftSum += nums[left];
            leftSub.push_back(nums[left]);
            left++;
        }
        if (right > cutPoint) {
            rightSum += nums[right];
            rightSub.insert(rightSub.begin(), nums[right]);
            right--;
        }
    }

    for (int num : leftSub) {
        cout << num << endl;
    }
    cout << "---" << endl;
    for (int num : rightSub) {
        cout << num << endl;
    }

    return 0;
}