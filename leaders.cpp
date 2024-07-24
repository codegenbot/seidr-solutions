#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        while(i<n-1 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i==n-1 || i==0) {
            res.push_back(nums[i]);
        } else {
            res.push_back(nums[i]);
            break;
        }
    }
    
    return res;
}