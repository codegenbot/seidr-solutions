#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    vector<vector<int>> res(2);
    
    for(int i = 1; i < nums.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j < i; j++) {
            left_sum += nums[j];
        }
        
        for(int j = i; j < nums.size(); j++) {
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if(diff < min_diff) {
            min_diff = diff;
            res[0] = vector<int>(nums.begin(), nums.begin() + i);
            res[1] = vector<int>(nums.begin() + i, nums.end());
        }
    }
    
    return res;
}