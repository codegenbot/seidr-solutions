#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

int main() {
    assert(issame(derivative(std::vector<float>{1.0f}), std::vector<float>()));
    return 0;
}