#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(const std::vector<int>& v) {
    std::vector<int> result(v.size());
    std::partial_sum(v.begin(), v.end(), result.begin(), [](int a, int b) { return std::max(a, b); });
    return result;
}