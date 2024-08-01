#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= nums.size(); ++i) {
        if (i == nums.size() || nums[i] - nums[i-1] < minDiff) {
            minDiff = i > 1 ? nums[i-1] - nums[0] : nums[i-1];
            splitIndex = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + splitIndex}, {nums.begin() + splitIndex, nums.end()}};
}