#include <vector>
#include <iostream>
using namespace std;
int getFirstNegativeIndex(vector<int>& nums) {
    int minSum = 0;
    int minSumIdx = -1;
    for (int i = 0; i < nums.size(); i++) {
        minSum += nums[i];
        if (minSum < 0 && (minSumIdx == -1 || minSum < minSumIdx)) {
            minSumIdx = i;
        }
    }
    return minSumIdx;
}
int main() {
    vector<int> nums = {1, -1};
    cout << getFirstNegativeIndex(nums) << endl;
    return 0;
}