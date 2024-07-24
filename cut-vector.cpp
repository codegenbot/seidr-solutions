#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].assign(nums.begin(), nums.begin() + cutIndex + 1);
    result[1].assign(nums.begin() + cutIndex + 1, nums.end());
    
    return result;
}