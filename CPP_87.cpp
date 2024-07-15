#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x - 1);
}