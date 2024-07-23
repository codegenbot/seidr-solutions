#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || nums[i] - nums[0] > nums[n-1] - nums[i-1]) {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
            break;
        }
    }
    
    if (!nums.empty()) {
        result.push_back(nums);
    }

    return result;
}