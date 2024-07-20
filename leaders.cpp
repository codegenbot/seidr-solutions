#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    for (int i = n - 1; i >= 0; i--) {
        while (i > n-2 && nums[i] < nums[n-1]) {
            n--;
        }
        if (i == n-1) continue;
        res.push_back(nums[i]);
    }
    
    reverse(res.begin(), res.end());
    return res;
}