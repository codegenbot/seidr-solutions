#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>

bool issame(std::vector<float> a, std::pair<float, float> b) {
    auto closest1 = std::min_element(a.begin(), a.end(), [b](float x, float y){ return std::abs(x - b.first) < std::abs(y - b.first);});
    auto closest2 = std::min_element(a.begin(), a.end(), [b](float x, float y){ return std::abs(x - b.second) < std::abs(y - b.second);});
    return std::make_pair(*closest1, *closest2) == b;
}