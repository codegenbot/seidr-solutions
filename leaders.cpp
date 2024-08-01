#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    
    if (n == 1) return {nums[0]};
    
    for (int i = n - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] < nums[j]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) leaders.push_back(nums[i]);
    }
    
    return leaders;
}