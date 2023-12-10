#include <vector>
#include <iostream>
using namespace std;

int getFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -1};
    cout << getFirstNegativeIndex(nums) << endl;
    return 0;
}