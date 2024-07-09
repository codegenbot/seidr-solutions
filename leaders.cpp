#include <vector>

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_right = nums[n - 1];
    leaders.push_back(max_right);
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}