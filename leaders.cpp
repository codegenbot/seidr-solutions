Here is the completed code:

#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> res;
    int maxRight = 0;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            res.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(res.begin(), res.end());
    return res;
}