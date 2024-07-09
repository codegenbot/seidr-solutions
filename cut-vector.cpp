#include <vector>
#include <climits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> left, right;
    if (nums.empty()) {
        return make_pair(left, right);
    } else if (nums.size() == 1) {
        return make_pair({nums[0]}, {});
    } else {
        left.assign(nums.begin(), nums.begin() + splitIndex);
        right.assign(nums.begin() + splitIndex, nums.end());
        return make_pair(left, right);
    }
}