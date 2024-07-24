#include <vector>
#include <climits>
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
            vector<int> left(nums.begin(), nums.begin() + i);
            nums.erase(nums.begin());
            while (!nums.empty() && nums[0] == left.back()) {
                nums.erase(nums.begin());
                left.pop_back();
            }
            result.push_back(left);
        } else {
            result.push_back(vector<int>(nums.end()-i, nums.end()));
            vector<int> right(nums.end()-i-1, nums.end());
            while (!right.empty() && right.back() == nums[i-1]) {
                right.pop_back();
                nums.erase(nums.begin()+i-1);
            }
            result.push_back(right);
        }
        
        if (!nums.empty()) {
            break;
        }
    }
    
    return result;
}