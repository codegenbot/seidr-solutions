#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int split_point = -1;
    
    for (int i = 0; i < n; ++i) {
        if ((i == 0 || nums[i] == nums[i-1]) && 
            (n-i-1 > 0 || nums[n-i-1] != nums[i])) {
            int left_sum = 0, right_sum = 0;
            for (int j = 0; j < i; ++j) {
                left_sum += nums[j];
            }
            for (int k = n-i; k < n; ++k) {
                right_sum += nums[k];
            }
            int diff = abs(left_sum - right_sum);
            if (diff < min_diff) {
                min_diff = diff;
                split_point = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i < split_point; ++i) {
        result[0].push_back(nums[i]);
    }
    for (int i = split_point; i < n; ++i) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}