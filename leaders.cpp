#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int maxRight = nums.back();
    
    leaders.push_back(maxRight);
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}