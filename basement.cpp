#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int> nums) {
    long long sum = 0;
    int negIndex = nums.size();
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    return negIndex;
}