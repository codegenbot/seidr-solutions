#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec(nums.begin(), nums.begin() + cutIndex);
    vector<int> rightVec(nums.begin() + cutIndex, nums.end());

    return make_pair(leftVec, rightVec);
}