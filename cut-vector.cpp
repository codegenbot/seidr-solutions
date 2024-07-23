#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for(int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if(diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left;
    for(int i = 0; i < splitIndex; i++) {
        left.push_back(nums[i]);
    }
    
    vector<int> right;
    for(int i = splitIndex; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {vector<int>(left), vector<int>(right)};
}