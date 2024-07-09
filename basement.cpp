#include <vector>
#include <numeric>
#include <initializer_list>

int basement(std::vector<int> nums) {
    std::partial_sum(nums.begin(), nums.end(), nums.begin());
    for (int i = 0; i < nums.size(); i++) {
        if (std::accumulate(nums.begin(), nums.begin() + i + 1, 0) < 0)
            return i;
    }
    return -1;
};