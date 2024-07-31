#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

float max_element(const std::vector<float>& l) {
    if (l.empty()) {
        return 0; // or any default value
    }

    float max_val = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}