#include <iostream>
#include <vector>
#include <cassert>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& data, int row) {
    return {data[row]};
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<int>& b) {
    return a == std::vector<std::vector<int>>{b};
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 2), {2, 2}));
    return 0;
}