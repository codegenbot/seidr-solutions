#include <vector>
#include <iostream>
using namespace std;
int getFirstNegativeIndex(vector<int>& nums) {
    int sum = 0, i = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
        i++;
    }
    return -1;
}
int main() {
    vector<int> nums = {1, -1};
    cout << getFirstNegativeIndex(nums) << endl;
    return 0;
}
