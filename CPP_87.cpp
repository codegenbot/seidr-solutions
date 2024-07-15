#include <vector>
#include <cassert>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x);
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {1, 2, 3}));
    return 0;
}