#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] - nums[i-1] <= min_diff) {
            min_diff = nums[i] - nums[i-1];
            idx = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + idx), vector<int>(nums.begin() + idx, nums.end())};