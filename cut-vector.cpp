#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    return {vector<int>(nums.begin(), nums.begin() + idx), vector<int>(nums.begin() + idx, nums.end())};