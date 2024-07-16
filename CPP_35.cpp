#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    float max = *std::max_element(l.begin(), l.end());
    return max;
}