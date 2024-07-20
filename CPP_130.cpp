#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> yourFunctionName(int n) {
    return std::vector<int>(n, 0);
}

int main() {
    int n = 2;
    std::vector<int> tri = yourFunctionName(n);
    assert(issame(tri, std::vector<int>{0, 0}));
    
    std::vector<int> other = yourFunctionName(n);
    other[0] = 1; other[1] = 3;
    assert(issame(other, std::vector<int>{1, 3}));

    return 0;
}