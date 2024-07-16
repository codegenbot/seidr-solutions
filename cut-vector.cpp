#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), nums.begin(), nums.begin() + idx + 1);
    result[1].insert(result[1].begin(), nums.begin() + idx + 1, nums.end());
    return result;
}