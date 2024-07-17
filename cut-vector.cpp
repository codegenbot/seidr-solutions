#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    pair<int, int> result;
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs((int)nums[i-1] - (int)nums[i]);
        if (diff <= minDiff) {
            minDiff = diff;
            result.first = vector<int>(nums.begin(), nums.begin() + i);
            result.second = vector<int>(nums.begin() + i, nums.end());
        }
    }
    return result;
}