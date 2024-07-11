#include <vector>

int findFirstNegativeSumIndex(const vector<int>& nums) {
    int res = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            res = i;
            break;
        }
    }

    return res < 0 ? -1 : res;
}