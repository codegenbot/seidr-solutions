#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

float find_max(const std::vector<float>& l) {
    float max_val = *max_element(l.begin(), l.end());
    return max_val;
}

int main() {
    assert(abs(find_max({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);

    return 0;
}