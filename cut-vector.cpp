#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left = vector<int>(nums.begin(), nums.begin() + cutIndex);
    vector<int> right = vector<int>(nums.begin() + cutIndex, nums.end());
    
    return make_pair(left, right);
}