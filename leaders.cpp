#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxSoFar = nums[n-1];
    leaders.push_back(maxSoFar);
    
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxSoFar) {
            maxSoFar = nums[i];
            leaders.push_back(maxSoFar);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}