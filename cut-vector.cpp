#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (abs(nums[i] - nums[i+1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i+1]);
            splitIndex = i + 1;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}