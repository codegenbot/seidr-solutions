#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs);

bool issame(std::vector<float> a, std::vector<float> b) {
    // implementation of issame function
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
}