#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}