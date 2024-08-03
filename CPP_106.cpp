#include <algorithm>
#include <iostream>
#include <vector>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame({1, 2, 6}, {1, 2, 6}));
}