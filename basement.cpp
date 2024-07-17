#include <vector>

int basement(vector<int>& nums) {
    int minIndex = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1; // Because indices are zero-based, we should return the index plus one
    }
    return -1;
}