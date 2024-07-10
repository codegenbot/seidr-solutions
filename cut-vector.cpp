#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs((i - 1 >= 0 ? nums[i-1] : 0) - nums[i]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cut_idx);
    vector<int> right(nums.begin() + cut_idx, nums.end());
    return {left, right};
}