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
    assert(issame(get_row({ {}, {1}, {1, 2, 3} }, 2), {1}));
    return 0;
}