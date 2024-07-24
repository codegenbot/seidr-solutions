#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + idx);
    vector<int> right(nums.begin() + idx, nums.end());
    
    return make_pair(left, right);
}