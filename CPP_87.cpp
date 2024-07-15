#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

const std::vector<int>& get_row(const std::vector<std::vector<int>>& lst, int x) {
    return lst.at(x);
}

int main() {
    std::vector<std::vector<int>> rows = {std::vector<int>{}, std::vector<int>{1}, std::vector<int>{1, 2, 3}};
    assert(issame(get_row(rows, 2), std::vector<int>{1, 2, 3}));
    return 0;
}