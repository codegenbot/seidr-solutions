#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int split_index = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = nums[i] - nums[0];
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + split_index), 
            vector<int>(nums.begin() + split_index, nums.end())};
}