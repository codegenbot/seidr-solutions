#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0, min_sum = 0, res = INT_MIN;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        res = max(res, i - min_sum);
        min_sum = min(min_sum, sum);
    }
    return res < 0 ? -1 : res + 1;
}