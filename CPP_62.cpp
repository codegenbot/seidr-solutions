#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

std::vector<float> derivative(const std::vector<float>& a) {
    std::vector<float> d(a.size() - 1);
    for (size_t i = 0; i < a.size() - 1; ++i) {
        d[i] = (a[i + 1] - a[i]);
    }
    return d;
}

int main() {
    assert(issame(derivative({1.0f}), {}));

    return 0;
}