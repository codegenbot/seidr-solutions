#include <algorithm>

float max_element(std::vector<float> l) {
    return *std::max_element(l.begin(), l.end());
}