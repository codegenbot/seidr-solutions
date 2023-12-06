```
#include <pmr/vector>

pmr::vector<pmr::vector<int>> get_row(const pmr::vector<pmr::vector<int>>& lst, int x) {
    pmr::vector<pmr::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}
```