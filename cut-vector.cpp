#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n), right(n);
    
    for (int i = 0; i < n; ++i) {
        if (i == 0)
            left[i] = nums[i];
        else
            left[i] = left[i-1] + nums[i];
        
        if (i == n - 1)
            right[i] = nums[i];
        else
            right[i] = nums[n-i-1] + right[i+1];
    }
    
    int min_diff = INT_MAX, cut_idx;
    for (int i = 0; i < n; ++i) {
        if (abs(left[i] - right[n-i-1]) < min_diff) {
            min_diff = abs(left[i] - right[n-i-1]);
            cut_idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    for (int i = 0; i <= cut_idx; ++i)
        result[0].push_back(nums[i]);
    for (int i = cut_idx + 1; i < n; ++i)
        result[1].push_back(nums[i]);
    
    return result;
}