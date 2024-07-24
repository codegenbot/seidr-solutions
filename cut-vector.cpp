#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= abs(nums[0] - nums[n - 1])) {
            res[0].insert(res[0].end(), nums.begin(), nums.begin() + (i + 1));
            res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
            break;
        }
    }
    
    if (res[0].size() == 0) {
        res[0] = nums;
        res[1].clear();
    } else {
        int diff = abs(nums[0] - nums[n - 1]);
        for (int i = 0; i < n - 1; i++) {
            if (abs(nums[i] - nums[i + 1]) <= diff) {
                res[0].insert(res[0].end(), nums.begin(), nums.begin() + (i + 1));
                res[1].insert(res[1].begin(), nums.begin() + i, nums.end());
                break;
            }
        }
    }
    
    return res;
}