#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    vector<vector<int>> result;
    
    for(int i = 0; i < nums.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j <= i; j++) {
            left_sum += nums[j];
        }
        
        for(int j = i + 1; j < nums.size(); j++) {
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if(diff <= min_diff) {
            min_diff = diff;
            result = {{nums.begin(), nums.begin() + (i + 1)}, {nums.begin() + i, nums.end()}};
        }
    }
    
    return result;
}