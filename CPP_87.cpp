#include <vector>
#include <algorithm>
#include <cassert>

bool isEqual(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (size_t i = 0; i < lst.size(); ++i) {
        for (size_t j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({static_cast<int>(i), static_cast<int>(j)});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    return result;
}

int main() {
    assert(isEqual(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}) == true);
    return 0;
}