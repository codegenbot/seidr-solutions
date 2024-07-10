#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(nums[i] - nums[0]) > abs(nums[n-1] - nums[i-1])) {
            res.push_back({nums.begin(), nums.begin() + i});
            nums.erase(nums.begin());
        } else {
            res.push_back({nums.begin(), nums.end()});
            break;
        }
    }
    
    return res;
}