#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int split_index = 0;
    for (int i = 1; i < n; ++i) {
        int diff = nums[i] - nums[0];
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    return {{nums.begin(), nums.begin() + split_index}, {nums.begin() + split_index, nums.end()}};