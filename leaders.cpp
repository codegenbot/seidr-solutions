#include <vector>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    // Rightmost element is always a leader.
    result.push_back(nums.back());
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= nums.back()) {
            result.push_back(nums[i]);
        }
    }
    
    return result;
}