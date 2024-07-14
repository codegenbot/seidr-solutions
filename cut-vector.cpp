#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftMin = INT_MAX;
    vector<int> res1, res2;
    
    for (int i = 0; i < n; i++) {
        int leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = accumulate(nums.begin() + i, nums.end(), 0);
        
        if (leftSum == rightSum) {
            res1 = vector<int>(nums.begin(), nums.begin() + i);
            res2 = vector<int>(nums.begin() + i, nums.end());
            return {res1, res2};
        } else if (abs(leftSum - rightSum) < abs(leftMin)) {
            leftMin = abs(leftSum - rightSum);
            res1 = vector<int>(nums.begin(), nums.begin() + i);
            res2 = vector<int>(nums.begin() + i, nums.end());
        }
    }
    
    return {res1, res2};
}