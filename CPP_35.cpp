#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(std::vector<float> l) {
    float max_val = l[0];
    for (const float& num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);