```cpp
#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            vector<int> row(lst[i].size());
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                row.push_back(i);
                row.push_back(j);
                result.push_back(row);
            }
        } else {
            vector<int> row(lst[i].size());
            for (int j = 0; j < lst[i].size(); j++) {
                row.push_back(i);
                row.push_back(j);
                result.push_back(row);
            }
        }
    }
    return result;
}