#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        
        if (diff == 0 || diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + splitIndex}, {nums.begin() + splitIndex, nums.end()}};
}