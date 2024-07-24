#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[0]) <= minDiff) {
            minDiff = abs(nums[i] - nums[0]);
            index = i;
        }
    }
    return {nums.begin(), nums.begin() + index} | | {nums.begin() + index, nums.end()};
}