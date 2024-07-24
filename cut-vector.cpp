#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = 0;
    vector<int> left, right;

    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    left = vector<int>(nums.begin(), nums.begin() + pos);
    right = vector<int>(nums.begin() + pos, nums.end());

    return {left, right};
}