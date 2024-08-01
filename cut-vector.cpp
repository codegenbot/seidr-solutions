#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[i-1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i-1]);
            idx = i;
        }
    }
    return {{nums.begin(), nums.begin() + idx}, {nums.begin() + idx, nums.end()}};