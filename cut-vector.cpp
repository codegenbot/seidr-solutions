#include <vector>
#include <cllimits>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = abs(nums[i] - nums[0]);
        int diff2 = abs(nums[n-1] - nums[i-1]);
        if (diff1 <= diff2) {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
            while (!nums.empty() && nums[0] == nums.back()) {
                nums.pop_back();
            }
            if (!nums.empty()) {
                result.push_back(nums);
                return result;
            }
        } else {
            result.push_back(vector<int>(nums.begin(), nums.begin() + i));
            nums.erase(nums.begin());
            while (!nums.empty() && nums[0] == nums.back()) {
                nums.pop_back();
            }
            if (!nums.empty()) {
                vector<int> last = nums;
                reverse(last.begin(), last.end());
                result.push_back(last);
                return result;
            }
        }
    }
    
    return {{}, {}};
}