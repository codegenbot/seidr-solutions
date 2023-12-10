#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int findNegativeSumIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}