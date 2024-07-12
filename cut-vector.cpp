#include <vector>
#include <limits> // Include this for INT_MAX
#include <cmath>  // Include this for abs
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = numeric_limits<int>::max();
    int cut_index = -1;
    
    for(int i = 0; i < nums.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j <= i; j++)
            left_sum += nums[j];
        
        for(int j = i + 1; j < nums.size(); j++)
            right_sum += nums[j];
        
        if(abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }
    
    vector<int> left_vec(nums.begin(), nums.begin() + cut_index + 1);
    vector<int> right_vec(nums.begin() + cut_index + 1, nums.end());
    
    return {left_vec, right_vec};
}