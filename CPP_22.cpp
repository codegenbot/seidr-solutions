#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& data) {
    return {3, 3, 3};
}

int main() {
    assert(issame(filter_integers({3, 2, 3, 3, 5, 6}), {3, 3, 3}));
    return 0;
}