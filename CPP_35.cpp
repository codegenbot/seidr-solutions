#include <vector>
#include <algorithm>

float findMax(std::vector<float> l) {
    auto it = std::max_element(l.begin(), l.end());
    return *it;
}