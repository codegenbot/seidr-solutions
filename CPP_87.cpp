#include <vector>
#include <cassert>

bool is_same(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

std::vector<int> get_row(const std::vector<std::vector<int>>& vec, int row_number) {
    return vec[row_number];
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 2), std::vector<std::vector<int>>{{2, 2}}));
    return 0;
}