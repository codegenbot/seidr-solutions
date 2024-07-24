#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    for(int i=n-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(nums[j] >= nums[i]){
                leader = false;
                break;
            }
        }
        if(leader) result.push_back(nums[i]);
    }
    return result;
}