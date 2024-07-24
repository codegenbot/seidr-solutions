#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    if(n <= 1)
        return {nums};
    
    int min_diff = INT_MAX, left_sum = 0, right_sum = 0;
    for(int i = 1; i < n - 1; i++){
        left_sum += nums[i-1];
        right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        if(abs(left_sum-right_sum) < min_diff){
            min_diff = abs(left_sum-right_sum);
        }
    }
    
    result.push_back(vector<int>(nums.begin(), nums.begin()+min_diff));
    vector<int> temp(nums.begin()+min_diff, nums.end());
    result.push_back(temp);
    
    return result;
}