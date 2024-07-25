#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& v) {
    if (v.size() < 2) return {};
    
    std::vector<float> result(v.size() - 1);
    
    for (size_t i = 1; i < v.size(); ++i) {
        result[i - 1] = v[i] - v[i - 1];
    }
    
    return result;
}