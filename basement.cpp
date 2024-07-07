#include <vector>

int basementIndex(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
}