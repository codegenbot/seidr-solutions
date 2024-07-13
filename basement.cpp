#include <vector>

int firstNegative(std::vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0)
                return j;
        }
        i++;
    }
    return -1;
}