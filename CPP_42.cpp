#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}