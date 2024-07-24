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
            if (abs(diff1-min_diff) < abs(min_diff)) {
                min_diff = diff1;
                result.push_back(vector<int>(nums.begin(), nums.begin() + i));
                vector<int> left(nums.begin(), nums.begin() + i);
                nums.erase(nums.begin());
                while (!left.empty() && left.back() == nums[0]) {
                    left.pop_back();
                    nums.erase(nums.begin());
                }
                result.push_back(left);
            }
        } else {
            if (abs(diff2-min_diff) < abs(min_diff)) {
                min_diff = diff2;
                result.push_back(vector<int>(nums.begin(), nums.begin() + i));
                vector<int> right(nums.begin() + i, nums.end());
                while (!right.empty() && right.back() == nums[n-1]) {
                    right.pop_back();
                    nums.erase(nums.begin() + i);
                }
                result.push_back(right);
            }
        }
    }
    
    if (!nums.empty()) {
        result.push_back(vector<int>(nums));
    }

    return result;
}