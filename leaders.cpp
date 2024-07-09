#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    for(int i=n-1; i>=0; i--) {
        if(i == n - 1 || nums[i] >= nums[i+1]) {
            result.push_back(nums[i]);
        }
    }
    
    return result;
}