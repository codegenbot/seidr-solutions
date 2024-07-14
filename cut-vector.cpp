#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + pos);
    vector<int> right(nums.begin() + pos, nums.end());
    
    return make_pair(left, right);
}