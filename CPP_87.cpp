#include <vector>
#include <cassert>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& data, int idx) {
    return {data[idx]};
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a[0][0] != b[0][0]) {
        return a[0][0] < b[0][0];
    }
    return a[0][1] > b[0][1];
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 2), {{2, 2}}));
    return 0;
}