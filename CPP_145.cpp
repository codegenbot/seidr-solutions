#include <algorithm>
#include <vector>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<int> res = nums;
    std::sort(res.begin(), res.end());
    return res;
}