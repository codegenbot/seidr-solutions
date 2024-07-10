#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    if(n == 1){
        res.push_back(nums[0]);
    } else{
        int maxRight = nums[n-1];
        res.push_back(maxRight);
        
        for(int i=n-2; i>=0; i--){
            if(nums[i] >= maxRight){
                maxRight = nums[i];
                res.push_back(maxRight);
            }
        }
    }
    
    return res;
}