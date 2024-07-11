#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    if (n == 1) return {nums[0]};
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= nums[i + 1]) {
            res.push_back(nums[i]);
        }
    }
    
    res.push_back(nums[n-1]);
    return res;
}