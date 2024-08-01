#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& polynomial) {
    std::vector<float> result;
    for (size_t i = 1; i < polynomial.size(); ++i) {
        result.push_back(polynomial[i] * i);
    }
    return result;
}

int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>{}));
    
    return 0;
}