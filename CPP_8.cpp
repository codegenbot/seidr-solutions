#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame(sum_product({10, 10}), {20, 100}));
    return 0;
}