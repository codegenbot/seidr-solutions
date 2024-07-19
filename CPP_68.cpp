#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> pluck(std::initializer_list<int> values) {
    return std::vector<int>(values);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}