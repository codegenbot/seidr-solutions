#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));
    return 0;
}