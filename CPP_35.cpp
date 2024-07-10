#include <iostream>
#include <vector>
#include <cassert>
#include <cmath> // Include cmath header for abs function

float max_element(const std::vector<float>& l) {
    assert(!l.empty());

    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }

    return max_val;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4); // Use std::abs and fix value comparison
}