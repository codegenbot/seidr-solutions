#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int resIndex = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] - nums[0] <= minDiff) {
            minDiff = nums[i] - nums[0];
            resIndex = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + resIndex), vector<int>(nums.begin() + resIndex, nums.end())};
}