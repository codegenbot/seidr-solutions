```
#include <vector>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
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
The issue was caused by the use of backticks (```) instead of angle brackets (<>) for including the header file. To fix this, replace all instances of `` with <> in the include directive.