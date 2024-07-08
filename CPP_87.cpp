#include <vector>

bool isSame(vector<vector<int>> a, vector<vector<int>> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}