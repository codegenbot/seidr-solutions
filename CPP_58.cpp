#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::vector<int> result;
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}