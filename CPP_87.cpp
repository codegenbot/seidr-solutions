#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> get_row(const std::vector<std::vector<int>>& matrix, int row_num) {
    return matrix[row_num];
}

bool is_same(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 2), std::vector<std::vector<int>>{{1, 2, 3}}));
    return 0;
}