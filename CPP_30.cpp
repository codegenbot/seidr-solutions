#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<std::vector<float>>& v) {
    std::vector<std::vector<float>> result = std::vector<std::vector<float>>();
    for (const auto& x : v) {
        if (x.size() > 0 && x[0] >= 0.0f) {
            result.push_back(x);
        }
    }
    return result;
}