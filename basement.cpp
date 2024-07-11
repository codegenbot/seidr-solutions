#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0, min_sum = 0, res = INT_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            res = min(res, i);
        }
    }
    return res == INT_MAX ? -1 : res;
}

int main() {
    vector<int> nums = {6, 42, 1, 49, 53, -82, -79};
    cout << basement(nums) << endl;
    return 0;
}