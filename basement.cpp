#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0) return i;
    }
    return -1; // Not found
}