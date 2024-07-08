#include <iostream>
#include <vector>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (i == x) {
            for (auto j : lst[i]) {
                result.push_back({j});
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> lst = {{}, {1}, {1, 2, 3}};
    std::vector<std::vector<int>> expected = {{1, 2, 3}};
    assert(std::equal(get_row(lst, 2).begin(), get_row(lst, 2).end(), expected.begin()));
}