#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>

bool is_same(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> derivative(const std::vector<float>& xs);

int main() {
    assert(is_same(derivative({1.0f}), {}));
    return 0;
}