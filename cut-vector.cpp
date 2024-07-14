#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    if (n == 1) {
        res.push_back({nums[0]});
        return res;
    }
    
    int min_diff = INT_MAX, cut_index = -1;
    for (int i = 0; i < n-1; ++i) {
        int diff = abs(nums[i] - nums[i+1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    res.push_back({nums[0]});
    res.push_back({nums[0], nums[cut_index]});
    res.push_back({nums[cut_index+1]});
    
    return res;
}