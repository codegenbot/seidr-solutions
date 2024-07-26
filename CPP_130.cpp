#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    assert(issame(std::vector<int>{1}, std::vector<int>{1}));
    assert(issame(std::vector<int>{1, 3}, std::vector<int>{1, 3}));
    return 0;
}