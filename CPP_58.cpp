#include <vector>
#include <algorithm>

std::vector<int> issame(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}