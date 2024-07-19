#include <vector>

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    // Implementation details can be added if needed
}

int main() {
    // Adjust assertion as needed based on the problem requirements
    assert(issame(derivative({1}), {}));
}