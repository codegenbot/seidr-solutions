#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}