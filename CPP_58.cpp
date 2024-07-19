#include <vector>
#include <algorithm>
#include <cstddef>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}