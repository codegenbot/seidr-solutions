#include <vector>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int sum = 0;
    for (int n : nums) {
        sum += n;
    }

    int target = sum / 2;
    int currSum = 0;
    int minDiff = INT_MAX;
    int index;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        int diff = abs(target - currSum);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }

    vector<int> subVector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subVector2(nums.begin() + index + 1, nums.end());

    return {subVector1, subVector2};
}