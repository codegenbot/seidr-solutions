#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n-1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(idx + 1);
    for (int i = 0; i <= idx; i++) {
        result[0].push_back(nums[i]);
    }
    result[1].resize(n - idx - 1);
    for (int i = idx + 1; i < n; i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}