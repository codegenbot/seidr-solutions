#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i].size() == x) {
            result.push_back(std::vector<int>{i, lst[i].size()});
        }
    }
    std::sort(result.begin(), result.end(), issame);
    return result;
}

int main() {
    assert(issame(get_row({ {}, { 1 }, { 1, 2, 3 } }, 3)[0], { 2, 3 }));
    return 0;
}