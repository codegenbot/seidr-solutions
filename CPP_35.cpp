#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

float max_element(const std::vector<float>& l) {
    float max_val = *std::max_element(l.begin(), l.end());
    return max_val;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}