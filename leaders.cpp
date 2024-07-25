#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; --i){
        while(i<n-1 && nums[i] >= nums[n-1]){
            n--;
        }
        res.push_back(nums[n-1]);
    }
    
    return res;
}