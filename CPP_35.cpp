#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    assert (std::abs(std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124.0) < 1e-4);
    return 0;
}