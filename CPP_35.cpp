#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert> // added include for assert

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    assert (std::abs(*std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end()) - 124) < 1e-4);
    return 0;
}