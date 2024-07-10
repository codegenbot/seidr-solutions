#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 3), std::vector<std::vector<int>>{{2, 2}}));
    return 0;
}