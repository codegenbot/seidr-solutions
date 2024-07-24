#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (abs(nums[i] - nums[i + 1]) <= minDiff) {
            minDiff = abs(nums[i] - nums[i + 1]);
            pos = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < pos; i++) {
        left.push_back(nums[i]);
    }
    for (int i = pos + 1; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}