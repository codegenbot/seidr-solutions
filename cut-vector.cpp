#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - nums[0]) <= min_diff) {
            min_diff = abs(nums[i] - nums[0]);
            cut_index = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + cut_index}, {nums.begin() + cut_index, nums.end()}};
}