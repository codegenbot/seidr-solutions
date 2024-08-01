#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a[0][0] != b[0][0]) {
        return a[0][0] < b[0][0];
    }
    return a[0][1] > b[0][1];
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), issame);
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}});
    return 0;
}