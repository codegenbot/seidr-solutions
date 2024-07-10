#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    for (int i = 1; i <= n; ++i) {
        if (i == n || abs(nums[i] - nums[0]) > abs(nums[i-1] - nums[0])) {
            res[0].insert(res[0].end(), nums.begin(), nums.begin() + i);
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
            break;
        }
    }
    return res;
}