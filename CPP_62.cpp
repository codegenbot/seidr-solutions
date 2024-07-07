```cpp
#include <vector>
#include <cmath>

std::vector<float> calculate_derivative(std::vector<float> a) {
    std::vector<float> result;
    for (int i = 1; i < a.size() - 1; ++i) {
        result.push_back((a[i+1] - a[i-1]) / 2.0);
    }
    return result;
}

int issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return 0;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9) return 0;
    }
    return 1;
}

int main() {
    std::vector<float> input = {1};
    assert(issame(calculate_derivative(input), {}));
    return 0;
}