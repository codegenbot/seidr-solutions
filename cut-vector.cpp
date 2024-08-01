#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; ++i) {
        if (abs(nums[i] - nums[0]) <= abs(nums[n - 1] - nums[i])) {
            res[0].insert(res[0].end(), nums.begin(), nums.begin() + i);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
            break;
        } else {
            res[0].insert(res[0].end(), nums.begin(), nums.end());
            res[1] = vector<int>(0);
            break;
        }
    }
    return res;
}