#include <vector>
#include <algorithm>
#include <set>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> solve(std::vector<int>& l1, std::vector<int>& l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}