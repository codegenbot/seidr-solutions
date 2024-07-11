#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0, min_sum = INT_MAX, res = INT_MIN;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        res = max(res, i - min_sum);
        min_sum = min(min_sum, i);
    }
    return res < 0 ? -1 : res;
}

int main() {
    vector<int> nums = {6, 42, 1, 49, 53, -82, -79};
    cout << basement(nums) << endl;
    return 0;
}