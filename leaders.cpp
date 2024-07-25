#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    for(int i = nums.size() - 1; i >= 0; i--){
        bool isLeader = true;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] >= nums[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(nums[i]);
    }
    return result;
}