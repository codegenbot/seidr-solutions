#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {{nums.begin(), nums.begin() + cutIndex}, {nums.begin() + cutIndex, nums.end()}};
}