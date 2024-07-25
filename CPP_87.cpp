#include <vector>
#include <iostream>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            result.push_back(lst[i]);
        } else if (x == 2) {
            vector<int> row;
            for (int j = 0; j < lst[0].size(); j++) {
                row.push_back(lst[i][j]);
            }
            result.push_back(row);
        }
    }
    return result;
}