#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x);

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    });
    for (int i = 0; i < result.size(); i++) {
        std::sort(result[i].begin(), result[i].end(), std::greater<int>());
    }
    return result;
}