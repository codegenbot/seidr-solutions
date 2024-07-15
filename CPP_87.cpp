#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x);
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 2), {1}));
    return 0;
}