#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::vector<float>(a) == std::vector<float>(b);
}

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}