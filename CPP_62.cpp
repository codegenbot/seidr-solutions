#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

int main() {
    assert(issame(derivative({1.0f}), std::vector<float>{}));
    return 0;
}