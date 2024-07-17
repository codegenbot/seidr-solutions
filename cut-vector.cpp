#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].insert(result[0].end(), nums.begin(), nums.begin() + index + 1);
    result[1].insert(result[1].begin(), nums.begin() + index, nums.end());
    
    return result;
}