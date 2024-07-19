#include <algorithm>
#include <vector>
#include <set>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    std::vector<int> sorted_l1 = l1;
    std::vector<int> sorted_l2 = l2;
    std::sort(sorted_l1.begin(), sorted_l1.end());
    std::sort(sorted_l2.begin(), sorted_l2.end());
    std::set_intersection(sorted_l1.begin(), sorted_l1.end(), sorted_l2.begin(), sorted_l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}