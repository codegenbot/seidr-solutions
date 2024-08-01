#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i].size() == x) {
            result.push_back(std::vector<int>{i, lst[i].size()});
        }
    }
    std::sort(result.begin(), result.end(),
              [](const std::vector<int>& a, const std::vector<int>& b) {
                  return a[1] < b[1];
              });
    return result;
}

int main() {
    assert(get_row({ {}, { 1 }, { 1, 2, 3 } }, 3)[0] == std::vector<int>{2, 3});
    return 0;
}