#include <vector>
#include <algorithm>

float maxAbs(float l) {
    std::vector<float> v = {l}; 
    return std::abs(*std::max_element(v.begin(), v.end()));
}