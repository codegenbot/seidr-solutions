#include <vector>
#include <algorithm>

int basement(std::vector<int>& nums) {
    std::vector<size_t>::size_type i = 0;
    size_t sum = 0;
    while (i < nums.size()) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
        i++;
    }
    return -1;
}