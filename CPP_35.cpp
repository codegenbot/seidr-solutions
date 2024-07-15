#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    return *std::max_element(l.begin(), l.end());
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}