#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_index = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    vector<int> left = {nums[0]};
    for (int i = 1; i <= cut_index; i++) {
        left.push_back(nums[i]);
    }

    vector<int> right = {nums[cut_index + 1]};
    for (int i = cut_index + 2; i < n; i++) {
        right.push_back(nums[i]);
    }

    return make_pair(left, right);
}