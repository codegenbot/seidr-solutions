#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int minDiff = INT_MAX;
    vector<vector<int>> result(2);

    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            result[0].clear();
            result[1].clear();
            result[0].reserve(i);
            for (int j = 0; j < i; ++j) {
                result[0].push_back(nums[j]);
            }
            result[1].reserve(nums.size() - i);
            for (int j = i; j < nums.size(); ++j) {
                result[1].push_back(nums[j]);
            }
        }
    }

    return result;
}