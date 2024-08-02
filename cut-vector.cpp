#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    if (n == 0) return {{}}; // edge case: empty array
    
    int min_diff = INT_MAX, cut_index = -1;
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    res.push_back(vector<int>(nums.begin(), nums.begin() + cut_index));
    res.push_back(vector<int>(nums.begin() + cut_index, nums.end()));
    return res;
}