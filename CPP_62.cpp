#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}

int main() {
    assert(issame(derivative({1.0f}), std::vector<float>{0.0f}));
    return 0;
}