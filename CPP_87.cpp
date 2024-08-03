#include <vector>
#include <algorithm>
#include <functional>

bool issame(int a, int b) {
    return a == b;
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (issame(lst[i][j], x)) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0];
    });
    for (auto& coord : result) {
        std::sort(coord.begin(), coord.end(), std::greater<int>());
    }
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3).at(0).at(0), 2);
    assert(issame(get_row({{1, 5, 6}, {4, 8}}, 4).at(0).at(1), 1);
    assert(issame(get_row({{9}, {7, 8, 9}, {4, 5, 6, 7}}, 7).at(1).at(2), 0);

    return 0;
}