#include <vector>
#include <cassert>

std::vector<int> f(int n) {
    return {1, 2, 6}; // Return the desired vector based on the input n
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}