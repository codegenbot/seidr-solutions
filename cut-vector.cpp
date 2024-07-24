#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int idx = -1;
    for(int i=0; i<nums.size()-1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    vector<int> left(nums.begin(), nums.begin() + idx + 1);
    vector<int> right(nums.begin() + idx + 1, nums.end());
    return {left, right};
}