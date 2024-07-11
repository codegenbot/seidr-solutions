#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return 0;
}

int main() {
    vector<int> nums = {1, -2, 3, -5, 2};
    cout << basement(nums) << endl;
    return 0;
}