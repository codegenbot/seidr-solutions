#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<int> res = nums;
    sort(res.begin(), res.end());
    return res;
}