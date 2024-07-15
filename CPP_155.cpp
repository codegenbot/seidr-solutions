#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> even_odd_count(2);
    even_odd_count[0] = 1;
    even_odd_count[1] = 0;

    assert(issame(even_odd_count, {1, 0}));

    return 0;
}