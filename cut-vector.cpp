#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int split_idx = -1;
    for (int i = 0; i < n; i++) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    vector<int> left_nums(nums.begin(), nums.begin() + split_idx);
    vector<int> right_nums(nums.begin() + split_idx, nums.end());
    return {left_nums, right_nums};
}