#include <vector>

int basement(vector<int>& nums) {
    int sum = 0;
    int index = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            index = i + 1; 
            break;
        }
    }
    return index == -1 ? -1 : index;