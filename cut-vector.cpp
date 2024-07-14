#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[0]) <= minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            pos = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + pos), vector<int>(nums.begin() + pos, nums.end())};
}