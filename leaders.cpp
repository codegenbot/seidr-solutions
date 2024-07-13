#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    for(int i = 0; i < nums.size();){
        int count = 1;
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] >= nums[i]){
                count++;
                break;
            }
        }
        if(count > 0){
            result.push_back(nums[i]);
        }
        i += count - 1;
    }
    return result;
}