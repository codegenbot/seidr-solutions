#include <vector>
#include <iostream>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (auto j : lst[i]) {
                result.push_back({i, j});
            }
        } else {
            for (auto j : lst[i]) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}