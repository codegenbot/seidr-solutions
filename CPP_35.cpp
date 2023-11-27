#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}