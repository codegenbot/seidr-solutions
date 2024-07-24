#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int idx = -1;

    for (int i = 0; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i; j < n; ++j) {
            right_sum += nums[j];
        }

        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    vector<int> left, right;
    for (int i = 0; i < idx; ++i) {
        left.push_back(nums[i]);
    }
    for (int i = idx; i < nums.size(); ++i) {
        right.push_back(nums[i]);
    }

    return {left, right};
}