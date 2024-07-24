#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i <= nums.size(); i++) {
        if (i == nums.size() || nums[i] - nums[0] < minDiff) {
            minDiff = nums[i] - nums[0];
            index = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + index), vector<int>(nums.begin() + index, nums.end())};
}