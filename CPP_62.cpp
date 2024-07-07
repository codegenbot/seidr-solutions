```
#include <vector>
#include <cmath>

std::vector<float> derivative(std::vector<float> a) {
    std::vector<float> result;
    for (int i = 1; i < a.size() - 1; ++i) {
        result.push_back((a[i+1] - a[i-1]) / 2.0);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

int main() {
    std::vector<float> input;
    input.push_back(1);
    assert(issame(derivative(input), std::vector<float>()));
    return 0;
}