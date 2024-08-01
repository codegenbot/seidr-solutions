#include <vector>

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum <= 0) {
            return i + 1; // Return the index starting from 1 instead of 0
        }
    }
    return -1;
}