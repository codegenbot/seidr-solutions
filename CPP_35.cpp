#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float max_element(const std::vector<float>& l) {
    if (l.empty()) return NAN;
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    std::cout << "Test passed!" << std::endl;
    return 0;
}