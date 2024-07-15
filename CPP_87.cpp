#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst[x];
}

int main() {
    assert(issame(get_row({std::vector<int>{}, std::vector<int>{1}, std::vector<int>{1, 2, 3}}, 2), std::vector<int>{1, 2, 3}));
    return 0;
}