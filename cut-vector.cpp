#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        if (abs(nums[i] - nums[i-1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i-1]);
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].assign(nums.begin(), nums.begin() + cutIndex);
    result[1].assign(nums.begin() + cutIndex, nums.end());
    
    return result;
}