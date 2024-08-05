#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    return {n, n + 2, n + 4};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(tri(1), {1, 3, 5}));
    return 0;
}