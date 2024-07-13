#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].reserve(splitIndex);
    result[1].reserve(nums.size() - splitIndex);
    for (int i = 0; i < splitIndex; i++) {
        result[0].push_back(nums[i]);
    }
    for (int i = splitIndex; i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}