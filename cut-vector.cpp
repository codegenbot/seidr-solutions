#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    vector<vector<int>> result;
    for (int i = 1; i <= nums.size(); ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            sumRight += nums[j];
        }
        int diff = abs(sumLeft - sumRight);
        if (diff <= minDiff) {
            minDiff = diff;
            result = {{nums.begin(), nums.begin() + i}}, {nums.begin() + i, nums.end()});
        }
    }
    return result;
}