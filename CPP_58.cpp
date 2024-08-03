#include <vector>
#include <algorithm>
#include <iterator>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result.empty();
}