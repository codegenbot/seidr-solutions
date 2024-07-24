#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>

bool is_same(std::vector<float>& a, std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> derivative(const std::vector<float>& xs) {
    if (xs.size() < 2) {
        return {};
    }

    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

int main() {
    assert(is_same(derivative({1.0f}), {}));
    return 0;
}