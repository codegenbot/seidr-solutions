#include <vector>
#include <algorithm>

auto findPair(std::vector<int>& nums, int target) -> std::pair<std::vector<int>::iterator, std::vector<int>::iterator> {
    std::sort(nums.begin(), nums.end());
    
    auto it = nums.begin();
    for (auto end = --nums.end(); it != end; ++it) {
        if (std::distance(it, end) > 1 && *it + *(end - 1) == target) {
            return {it, end - 1};
        } else if (*it + *(end - 1) > target) {
            --end;
        }
    };
    
    return {nums.begin(), nums.end()};
}