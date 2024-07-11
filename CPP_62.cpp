#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}