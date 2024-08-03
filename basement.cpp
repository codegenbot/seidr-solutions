#include <vector>

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1; // Return the index of the first negative sum
    }
    return -1; // If no such index is found, return -1
}