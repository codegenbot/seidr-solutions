```
#include <vector>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (size_t i = 0; i < lst.size(); i++) {
        if (lst[i].size() == x) {
            result.push_back(lst[i]);
        }
    }
    return result;
}
```