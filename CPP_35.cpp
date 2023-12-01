#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}