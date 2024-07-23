#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (x == i + 1) {
            for (int j = lst[i].size() - 1; j >= 0; --j) {
                result.push_back({lst[i][j]});
            }
        }
    }
    return result;
}