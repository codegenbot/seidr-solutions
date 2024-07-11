#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> derivative_xs;
    for (size_t i = 1; i < xs.size(); ++i) {
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

int main() {
    assert(issame(derivative({1}), {}));
    
    return 0;
}