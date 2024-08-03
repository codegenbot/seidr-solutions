#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for(size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

int main() {
    assert(issame(derivative({1.0f}), {}));
    return 0;
}