#include "leaders.h"

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    leaders.push_back(maxRight);
    
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(nums);
    
    for(int leader : result) {
        cout << leader << " ";
    }
    
    return 0;
}