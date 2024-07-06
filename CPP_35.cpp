#include <vector>
#include <algorithm>

float largest(const vector<int>& l) {
    std::vector<float> v = {l}; 
    return *std::max_element(v.begin(), v.end());
}