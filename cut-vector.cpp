#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] - nums[i-1] <= min_diff) {
            min_diff = nums[i] - nums[i-1];
            cut_index = i;
        }
    }
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), nums.begin(), nums.begin() + cut_index);
    result[1].insert(result[1].begin(), nums.begin() + cut_index, nums.end());
    return result;
}