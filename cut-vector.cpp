#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    vector<vector<int>> result;
    
    if (nums.size() == 0) {
        return {{}};
    }
    
    int minDiff = INT_MAX, cutIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; ++j) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < nums.size(); ++j) {
            rightSum += nums[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff || (diff == minDiff && i > cutIndex)) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    result.push_back(vector<int>(nums.begin(), nums.begin() + cutIndex));
    result.push_back(vector<int>(nums.begin() + cutIndex, nums.end()));
    
    return result;
}