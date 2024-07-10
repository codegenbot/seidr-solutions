#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

float findMaxValue(std::vector<int> l) {
    std::vector<float> v = {l.begin(), l.end()};
    return *std::max_element(v.begin(), v.end());
}