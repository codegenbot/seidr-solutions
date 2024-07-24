#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int split_idx = -1;

    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }

    vector<vector<int>> result(2);
    result[0].resize(split_idx + 1);
    for (int i = 0; i <= split_idx; i++) {
        result[0].push_back(nums[i]);
    }
    result[1].resize(nums.size() - split_idx - 1);
    for (int i = 0; i < nums.size() - split_idx - 1; i++) {
        result[1].push_back(nums[split_idx + i + 1]);
    }

    return result;
}