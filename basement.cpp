#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum + nums[i] < 0) {
            return i;
            sum += nums[i]; // Move this line inside the if block
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {18, 84, 87, 16, 61, 100, -18, -19, 0, 18, 88, -100, -85, -7, -37, -77, -63, -67, -65};
    cout << basement(nums) << endl;
    return 0;
}