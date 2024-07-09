#include <vector>

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float x : v) {
        if (x >= 0) {
            result.push_back(x);
        }
    }
    return result;
}

bool checkSame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return checkSame(a, get_positive(a)) && checkSame(get_positive(b), b);
}