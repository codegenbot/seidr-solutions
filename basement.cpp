#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int> nums) {
    long long sum = 0;
    int negIndex = nums.size();
    for (int i = 0; i < nums.size(); ++i) {
        if (sum < 0) { // Handle integer overflow
            negIndex = i - 1;
            break;
        }
        sum += nums[i];
    }
    return negIndex;
}

int main() {
    vector<int> nums = {18, 84, 87, 16, 61, 100, -18, -19, 0, 18, 88, -100, -85, -7, -37, -77, -63, -67, -65};
    cout << basement(nums) << endl;
    return 0;
}