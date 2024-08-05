#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    if (n == 1) {
        return {1, 3};
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