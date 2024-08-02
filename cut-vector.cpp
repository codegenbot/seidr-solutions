#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i <= nums.size(); ++i) {
        int diff = abs((long long)nums[0] - nums[i]);
        if (diff < minDiff || (diff == minDiff && nums[0] > nums[i])) {
            minDiff = diff;
            result.first.assign(nums.begin(), nums.begin() + i);
            result.second.assign(nums.begin() + i, nums.end());
        }
    }
    return result;
}