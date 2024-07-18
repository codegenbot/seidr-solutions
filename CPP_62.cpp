#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

template<typename T>
bool issame(std::vector<T> a, std::vector<T> b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1.0f}), std::vector<float>{}));
    return 0;
}