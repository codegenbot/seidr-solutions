#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    vector<vector<int>> result;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff <= minDiff) {
            minDiff = diff;
            result = {{nums[0], nums[i]} , {nums[i+1], nums.back()}};
        }
    }
    
    return result;
}