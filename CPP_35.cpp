#include <algorithm>
#include <vector>

float max_element(const std::vector<float>& l) {
    return *std::max_element(l.begin(), l.end());
}