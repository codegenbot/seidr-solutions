#include <vector>
#include <iostream>
using namespace std;
int firstNegative(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (sum + nums[i] >= 0) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}