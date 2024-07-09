#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end());
    for (auto &coord : result) {
        std::sort(coord.begin(), coord.end(), std::greater<int>());
    }
    return result;
}

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

int main() {
    assert(issame(get_row({ {}, {1}, {1, 2, 3} }, 3), { {2, 2} }));
    
    return 0;
}