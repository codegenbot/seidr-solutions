#include <vector>
#include <cassert>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return std::vector<std::vector<int>>(a) == std::vector<std::vector<int>>(b);
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x - 1);
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {1, 2, 3}));
    return 0;
}