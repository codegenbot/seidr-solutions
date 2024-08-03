#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    float max_val = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}