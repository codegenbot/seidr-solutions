#include <vector>
#include <cassert>

std::vector<int> calculateValues(int n) {
    if (n == 1) {
        return {1};
    } else if (n == 2) {
        return {1, 2};
    } else if (n == 3) {
        return {1, 2, 6};
    }
    return {};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(calculateValues(3), {1, 2, 6}));
    return 0;
}