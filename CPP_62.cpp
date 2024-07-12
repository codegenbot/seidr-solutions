#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& a) {
    std::vector<float> result;
    for (size_t i = 1; i < a.size(); ++i) {
        result.push_back(a[i] - a[i - 1]);
    }
    return result;
}