#include <vector>
#include <climits> 
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = abs(nums[i] - nums[0]);
        int diff2 = abs(nums[n-1] - nums[i-1]);
        if (diff1 + diff2 < min_diff) {
            min_diff = diff1 + diff2;
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            vector<int> temp(nums.begin() + i, nums.end());
            result.push_back(temp);
        }
    }
    
    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;
}