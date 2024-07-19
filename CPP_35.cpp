#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    return *std::max_element(l.begin(), l.end());
}