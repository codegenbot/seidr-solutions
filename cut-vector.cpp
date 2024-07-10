#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    int min_diff = INT_MAX, mid = -1;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == 0 || (mid == -1 && nums[i] != nums[0])) {
            res.push_back({nums.begin(), nums.begin() + i});
            mid = i;
        } else if (abs(nums[i] - nums[0]) < min_diff) {
            min_diff = abs(nums[i] - nums[0]);
            res.clear();
            res.push_back({nums.begin(), nums.begin()});
            res.push_back({{nums.begin() + 1}, {nums.begin() + i}});
        }
    }
    if (mid != -1) {
        res.push_back({{nums.begin() + mid + 1}, {nums.end()}});
    } else {
        res.push_back({{nums.begin()}, {nums.end()}});
    }
    return res;
}