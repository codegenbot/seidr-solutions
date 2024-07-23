#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

float max_element(const std::vector<float>& l) {
    float max_val = *std::max_element(l.begin(), l.end());
    return max_val;
}