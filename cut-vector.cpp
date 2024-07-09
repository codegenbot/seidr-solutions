#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    vector<int> left, right;
    for (int i = 1; i <= nums.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; j++) {
            sumLeft += nums[j];
        }
        for (int j = i; j < nums.size(); j++) {
            sumRight += nums[j];
        }
        if (sumLeft == sumRight) {
            return {vector<int>(nums.begin(), nums.begin() + i), vector<int>(nums.begin() + i, nums.end())};
        } else if (abs(sumLeft - sumRight) < minDiff) {
            minDiff = abs(sumLeft - sumRight);
            left = vector<int>(nums.begin(), nums.begin() + i);
            right = vector<int>(nums.begin() + i, nums.end());
        }
    }
    return {left, right};
}