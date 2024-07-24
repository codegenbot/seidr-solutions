#include <vector>
#include <climits> 
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; i++) {
        int diff1 = nums[i] - nums[0];
        int diff2 = nums[n-1] - nums[i-1];
        if (std::abs(diff1-diff2) < std::abs(INT_MAX)) {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
        }
    }
    
    if (!nums.empty()) {
        result.push_back(vector<int>(nums.begin(), nums.end()));
    }

    return result;
}