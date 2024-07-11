#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0, min_sum = 0, res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        res = min(res, sum - min_sum);
        min_sum = min(min_sum, sum);
    }
    return res == 0 ? 0 : res + 1;
}

int main() {
    vector<int> nums = {6, 42, 1, 49, 53, -82, -79};
    cout << basement(nums) << endl;
    return 0;
}