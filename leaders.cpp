#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> res;
    int n = nums.size();
    res.push_back(nums[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(nums[i] >= res.back()) {
            res.push_back(nums[i]);
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}