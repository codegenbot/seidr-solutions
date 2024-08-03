#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    std::vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}