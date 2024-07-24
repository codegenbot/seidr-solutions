#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; ++j) {
            sumLeft += nums[j];
        }
        for (int j = i + 1; j < n; ++j) {
            sumRight += nums[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i <= splitIndex; ++i) {
        result[0].push_back(nums[i]);
    }
    for (int i = splitIndex + 1; i < n; ++i) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}