#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    auto v = std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123});
    v.erase(std::unique(v.begin(), v.end()), v.end());
    assert(issame(v, {5, 3, 2, 9, 0, 123}));

    return 0;
}