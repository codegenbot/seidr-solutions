#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(const std::vector<std::pair<int, int>>& v) {
    std::vector<int> sums;
    for (const auto& p : v) {
        sums.push_back(p.first + p.second);
    }
    return std::count(sums.begin(), sums.end(), 0) > 0;
}