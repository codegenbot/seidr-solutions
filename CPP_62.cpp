#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
}