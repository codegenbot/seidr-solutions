#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x);
}