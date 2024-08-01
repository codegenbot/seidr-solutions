#include <vector>
#include <cassert>
#include <iostream>

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

std::vector<int> f(int n) {
    std::vector<int> result(n);
    for (int i = 1; i <= n; ++i) {
        result[i - 1] = i;
    }
    return result;
}

int main() {
    assert(issame(f(3), std::vector<int>{1, 2, 3}));
    return 0;
}