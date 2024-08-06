#include <vector>
#include <cmath>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return std::abs(a.first - b.first) < 0.00001 && std::abs(a.second - b.second) < 0.00001;
}