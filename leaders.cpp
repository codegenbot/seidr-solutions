#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    for(int i = 0; i < n; i++) {
        bool isLeader = true;
        for(int j = i + 1; j < n; j++) {
            if(nums[j] >= nums[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) leaders.push_back(nums[i]);
    }
    return leaders;
}