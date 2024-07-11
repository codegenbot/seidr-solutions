#include <vector>
#include <cassert>

int derivative(const std::vector<float>& xs) {
    int result = 0;
    for (size_t i = 0; i < xs.size(); i++) {
        result += xs[i];
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}