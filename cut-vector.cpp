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
    result[0].resize(cutIndex + 1);
    for (int i = 0; i <= cutIndex; i++) {
        result[0].push_back(nums[i]);
    }
    result[1].resize(nums.size() - cutIndex - 1);
    for (int i = cutIndex + 1; i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}