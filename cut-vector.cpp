#include <vector>
#include <climits>  
#include <cmath>  

using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int split_idx = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++) {
            left_sum += nums[j];
        }
        
        for (int j = i + 1; j < nums.size(); j++) {
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    
    for (int i = 0; i <= split_idx; i++) {
        result[0].push_back(nums[i]);
    }
    
    for (int i = split_idx + 1; i < nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}